#include <iostream>
using namespace std;
int main() {
    int num=5;
    long int a[num];
    for(int i=0 ; i<num ;i++){
        cin>>a[i];
    }
    for(int i=1 ; i<num ;i++){
        if(a[i]<=0){
            cout<<"ERROR";
            return 0;
        }
        if( a[i]>a[i-1]){
            cout<<"LOSS";
            return 0;
        }
    }
    cout<<"WIN";
    return 0;
}
