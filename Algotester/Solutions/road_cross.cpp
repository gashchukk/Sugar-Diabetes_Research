#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int num=0;
    for(int i=0;i<n-1;i++){
        if((vec[i] + vec[i+1])%2==0 ){
        }else if((vec[i] + vec[i+1])%2==1){
            num++;
        }
    }
    cout<<num;
    return 0;
}

