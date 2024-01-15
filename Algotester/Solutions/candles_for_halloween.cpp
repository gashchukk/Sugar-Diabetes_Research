#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int n, m;
    cin>> n>>m;
    vector<int>len(m);
    for(int i=0;i<m;i++){
        cin>>len[i];
    }
    double left=0,right=len.size(),av;
    sort(len.begin(),len.end());
    while(right-left > 1e-7){
        int sum=0;
        av = (left+right)/2;
        for(int j=0;j<m;j++){
            sum += len[j]/av;
        }
        if(sum >=n){
            left=av;
        }else
            right =av;
    }
    cout<<fixed<<setprecision(7)<<right;
    return 0;
}
