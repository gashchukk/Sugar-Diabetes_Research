#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int fans;
    cin >> fans;
    //vector<vector<int>>coord;
    vector<int> x(fans);
    vector<int> y(fans);
    for(int i=0;i<fans;i++){
        cin>>x[i]>>y[i];
    }
    vector<int> res(fans);
    for (int i = 0; i < fans; i++) {
        if (x[i] > 1 && y[i] > 1) {
            res[i] = 0;
        } else if (x[i] == 1 || y[i] == 1) {
            if ((x[i] * y[i]) % 2 == 0) {
                res[i] = 2;
            } else if (x[i] * y[i] % 2 == 1) {
                res[i] = 3;
            }
        }
    }
    for(int j=0;j<fans;j++){
        cout<<res[j]<<endl;
    }
    return 0;

}
