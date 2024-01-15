#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int shout = 0;
    int min, current = 0;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    min = vec[0];
    for (int i = 0; i < n; i++) {
        current=vec[i];
        if (current <= min) {
            shout++;
            min = current;
        }
    }

    cout << shout;
    return 0;
}

