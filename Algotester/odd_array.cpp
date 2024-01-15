#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vet(n);
    vector<int> res;
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            odd.push_back(vet[i]);
        } else if (vet[i] % 2 == 1) {
            even.push_back(vet[i]);
        }
    }
    if (odd.size() > even.size() + 1 || even.size() > odd.size() + 1) {
        cout << "-1";
    } else {
        if(odd.size()==even.size()+1){
            for (int i = 0; i < n; i++) {
                res.push_back(odd[i]);
                res.push_back(even[i]);
            }}else{
            for(int i=0;i<n;i++){
                res.push_back(even[i]);
                res.push_back(odd[i]);
            }
        }
        cout << endl;
        if (even.size() == odd.size() + 1 || odd.size() == even.size() + 1) {
            res.pop_back();
        }

        for (int j = 0; j < n; j++) {
            cout << res[j] << " ";
        }



    }
    return 0;
}

