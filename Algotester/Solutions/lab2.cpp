#include <iostream>
#include<vector>
using namespace std;

int main() {
    int size;
    cin>>size;
    int *arr=new int[size];
    bool check = true;
    if(size<1001 && size>=1) {
        for (int i = 0; i <= size-1; i++) {
            cin >> arr[i];
            if(arr[i]<1 || arr[i]>5){
                check=false;
            }
        }
    }
    if(check) {
        int drone1 = 0;
        int drone2 = size - 1;
        while (drone1 < drone2-1) {
            drone1 += arr[drone1];
            drone2 -= arr[drone2];
        }
        cout << drone1 + 1 << " " << drone2 + 1 << endl;
        if (drone1 == drone2) {
            cout << "Collision";
            return 0;
        } else if (drone1 > drone2) {
            cout << "Miss";
            return 0;
        } else if (drone2 - drone1 == 1) {
            cout << "Stopped";
            return 0;
        }

    }
    delete[] arr;
    return 0;
}

