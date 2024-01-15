#include <iostream>
#include<string>
using namespace std;
int main(){
    string letter;
    cin>>letter;
    for(int i=0;i<letter.size();i++){
        int num=0;
        for (i; letter[i] == letter[i + 1]; i++)
            num++;

        if(num !=0){
            cout<<letter[i]<<num+1;
        }else if(num==0) {
            cout << letter[i];
        }
    }

    return 0;
}


