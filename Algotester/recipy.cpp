#include <iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int sum;
    cin>>sum;
    vector<int>ing(sum);
    for(int i=0;i<sum;i++){
        cin>>ing[i];
    }
    sort(ing.begin(),ing.end());
    double res=ing[0];
    for(int i=1;i<sum;i++){
        res=(ing[i]+res)/2;
    }
    cout<<fixed<<setprecision(7)<<res;
}

