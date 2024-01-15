#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    int x_z,y_z;
    cin>>x_z>>y_z;
    int x_v,y_v;
    cin>>x_v>>y_v;
    int n;
    cin>>n;
    vector<int>x_s(n);
    vector<int>y_s(n);
    for(int i=0;i<n;i++){
        cin>>x_s[i]>>y_s[i];
    }
    for(int i=0;i<n;i++){
        if(sqrt(pow((x_s[i]-x_v),2)+pow((y_s[i]-y_v),2))>=sqrt(pow((x_z-x_v),2)+pow((y_z-y_v),2))){
            cout<<"YES";
            return 0;
        }}

    for(int i=0;i<n;i++){
        if(sqrt(pow((x_s[i]-x_v),2)+pow((y_s[i]-y_v),2))<sqrt(pow((x_z-x_v),2)+pow((y_z-y_v),2))) {
            cout << "NO";
            break;
        }
    }
}
