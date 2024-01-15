#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>>rotate(const vector<vector<int>>&v){
    vector<vector<int>>res;
    vector<int>row_res;
    for(int n=0;n<v.size();n++){
        for(int m=0;m<v[n].size();m++){
            row_res.push_back(v[m][n]);
        }
        res.push_back(row_res);
        row_res.clear();
    }
    return res;
}

void print( vector< set<int>> end, vector<vector<int>>sudoku, int num, vector< vector<int>> xy){
    for (int j = 0; j < num; j++) {
        if ( sudoku[xy[j][0]][xy[j][1]] != 0) {
            end[j].clear();
            end[j].emplace( sudoku[xy[j][0]][xy[j][1]]);
        }
        if (end[j].count(0)!=0) {
            cout << "0" << endl << endl;
        }else {
            cout << end[j].size() << endl;
            for (int i: end[j]){
                cout << i << ' ';}
            cout << endl << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>>sudoku;

    vector<int>sline;
    string line;
    for (int j = 0; j < N; j++) {
        cin >> line;
        for (char c: line){
            sline.push_back( c-'0');
        }
        sudoku.push_back( sline);
        sline.clear();
    }
    int num;
    cin >> num;
    vector< vector<int>> xy;


    int x, y;
    for (int i=0; i<num;i++) {
        vector<int> xyline;

        cin >>x >>y;
        x--, y--;
        xyline.push_back(x);
        xyline.push_back(y);
        xy.push_back(xyline);
        xyline.clear();
    }
    vector< set<int>> end;
    set<int> set_line[num];

    for (int i = 0; i < num; i++) {
        set<int> v2_row;
        for (int k : sudoku[xy[i][0]]) {
            v2_row.emplace(k);
        }
        for (int s = 1; s <= sudoku.size(); s++) {
            if (v2_row.find(s) == v2_row.end()){
                set_line[i].emplace(s);
            }
        }

    }
    vector<vector<int>>srotate;
    srotate=rotate(sudoku);

    set<int> lset_rotate[num];
    set<int> lset_end;
    for (int i = 0; i < num; i++){
        set<int> v1_row;
        for (int j : srotate[xy[i][1]]) {
            v1_row.emplace(j);
        }
        for (int n = 1; n <= srotate.size(); n++) {
            if (v1_row.find(n) == v1_row.end()){
                lset_rotate[i].emplace(n);
            }
        }
        for (int j : set_line[i]) {
            if (lset_rotate[i].find(j) != lset_rotate[i].end()) {
                lset_end.emplace(j);
            }
        }
        end.push_back(lset_end);
        lset_end.clear();
    }
    print(end,sudoku,num,xy);
    return 0;
}

