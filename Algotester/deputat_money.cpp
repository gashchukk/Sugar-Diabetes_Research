#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 0;
    int array[9]{500, 200, 100, 50, 20, 10, 5, 2, 1};
    for(int i=0;i<9;i++) {
        while(n >=array[i]){
            n-=array[i];
            num++;
        }
    }
    cout << num;
    return 0;
}

