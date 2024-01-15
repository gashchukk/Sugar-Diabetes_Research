#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int k,n;
    cin>>k>>n;
    vector<int>att(n);
    for(int i=0;i<n;i++){
        cin>>att[i];
    }
    sort(att.begin(),att.end());
    int res=0;
    for(int i=0;i<n;i++){
        if(k>=att[i]){
            k-=att[i];
            res++;
        }
    }
    cout<<res;
    return 0;
}
