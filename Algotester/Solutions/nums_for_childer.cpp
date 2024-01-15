#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mycomp(int a,int b){
    return a>b;
}
int main() {
    string input;
    cin>>input;
    vector<int>beg;
    for (char c: input)
        beg.push_back(c - '0');
    sort(beg.begin(),beg.end());
    vector<int>beg2;
    beg2=beg;
    for(int i=0;i<beg.size();i++){
        if(beg[0]==0){
            swap(beg[0],beg[i]);
        }}
    sort(beg2.begin(),beg2.end(),mycomp);

    for(int i=0;i<input.length();i++){
        cout<<beg[i];
    }
    cout<<" ";
    for(int i=0;i<input.length();i++){
        cout<<beg2[i];
    }
    return 0;
}

