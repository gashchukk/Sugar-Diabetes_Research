#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int x,y;
    cin>>x>>y;
    if(count(str.begin(),str.end(),'R')>=x && count(str.begin(),str.end(),'U')>=y) {
        cout << "YES";
    }else if((count(str.begin(),str.end(),'R')>=x && y==0)||(count(str.begin(),str.end(),'U')>=y && x==0)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}
