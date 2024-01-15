#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool srt(int a, int b){
    return a>b;
}
int main() {
    int num;
    cin>>num;
    vector<int>arr(num);
    for (int i = 0; i < num; i++) {
        cin>>arr[i];
    }
    vector<int>vec1;
    vector<int>vec2;
    vector<int>vec3;
    for (int i = 0; i < num; i++) {
        if(arr[i]%3==0) {vec1.push_back(arr[i]);
        } else if(arr[i]%3==2){
            vec3.push_back(arr[i]);
        } else if(arr[i]%3==1) {
            vec2.push_back(arr[i]);
        }
    }
    for(int i=0;i<vec1.size()-1;i++){
        for(int j=i+1;j<vec1.size();j++){
            if(vec1[i]>vec1[j]){
                swap(vec1[i],vec1[j]);
            }
        }}
    for(int i=0;i<vec2.size()-1;i++){
        for(int j=i+1;j<vec2.size();j++){
            if(vec2[i]<vec2[j]){
                swap(vec2[i],vec2[j]);
            }
        }}
    for(int i=0;i<vec3.size()-1;i++){
        for(int j=i+1;j<vec3.size();j++){
            if(vec3[i]>vec3[j]){
                swap(vec3[i],vec3[j]);
            }
        }}
    for (int  i=0; i<vec2.size();i++) {
        vec1.push_back(vec2[i]);}
    for (int i=0; i<vec3.size();i++) {
        vec1.push_back(vec3[i]);}
    vec1.erase(unique(begin(vec1), end(vec1)), end(vec1));
    cout<<vec1.size()<<endl;
    for (int i = 0; i < vec1.size(); i++) {
        cout<<vec1[i]<<" ";}
    return 0;

}


