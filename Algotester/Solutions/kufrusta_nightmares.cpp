#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string line, in="In", out="Out";
    int sum=0, sum_o=0;

    for (int i = 0; i < n; i++) {
        cin>>line;
        if(line == in){
            sum++;
        }else if(line ==out){
            sum_o++;
        }
        if(sum==sum_o){
        }else if(sum > sum_o){
        }else {
            cout<<"Error";
            return 0;
        }
    }
    if(sum==sum_o) {
        cout << "Just a fantasy";
    }else if(sum>sum_o){ cout<<"Cunning elector";}
    else{
        cout<<"Error";
    }
    return 0;
}


