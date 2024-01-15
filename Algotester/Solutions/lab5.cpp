#include <iostream>
#include <vector>
using namespace std;
int main() {

    int N, M;
    cin >> N >> M;
    int x, y;
    cin>> x >> y;
    x--, y--;

    vector<int> pole[N];
    int x1;
    bool b1 = x>=N/2;
    if(b1){x1=N-x-1;}else{x1=x;}

    int y1;
    bool b2=y>=M/2;
    if(b2){y1=M-y-1;}else{y1=y;}

    int max_value;
    max_value=N+M-x1-y1-2;


    int first, next_first;
    int s = 0;
    if(N==2 && M==2){
        max_value=2;
    }else if((N==2 && M==1)||(N==1 && M==2)){
        max_value=1;
    }

    for (int i = 0; i < N; i++) {
        first = max_value - x - y - s;
        for (int j = 0; j < M; j++) {
            bool b3=j>=y;
            if(b3){next_first = first--;}else{next_first = first++;}
            pole[i].push_back(next_first);
        }
        bool b4= i<x;
        if(b4){s=s-1;}else{s=s+1;}
    }

    for (int v=0; v < N; v++) {
        for (int w=0; w < M; w++)
            cout << pole[v][w] << ' ';
        cout << '\n';
    }

    return 0;
}

