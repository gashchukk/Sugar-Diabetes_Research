#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int vec[9][9] = {
            {9, 3, 4, 7, 8, 5, 6, 2, 1},
            {6, 7, 8, 2, 1, 3, 4, 5, 9},
            {5, 1, 2, 6, 4, 9, 8, 3, 7},
            {1, 2, 6, 3, 5, 8, 9, 7, 4},
            {7, 8, 5, 4, 9, 2, 3, 1, 6},
            {4, 9, 3, 1, 7, 6, 2, 8, 5},
            {3, 6, 9, 5, 2, 1, 7, 4, 8},
            {8, 5, 7, 9, 3, 4, 1, 6, 2},
            {2, 4, 1, 8, 6, 7, 5, 9, 3},
    };
    int x, y, num;
    cin >> x >> y >> num;
    x--,y--;
    int res=vec[x][y];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if(vec[i][j]==res)
                vec[i][j] = num;
            else if(vec[i][j]==num)
                vec[i][j]=res;
        }}

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

