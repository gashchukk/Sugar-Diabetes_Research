#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comparator( vector<int>& a, const vector<int>& b) {
    return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]) || (a[0] == b[0] && a[1] == b[1] && a[2] < b[2]);
}
int main() {
    int n;
    cin >> n;

    vector<vector<int>>suitcase;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        suitcase.push_back({x, y, z});
        suitcase.push_back({x, z, y});
        suitcase.push_back({y, x, z});
        suitcase.push_back({y, z, x});
        suitcase.push_back({z, x, y});
        suitcase.push_back({z, y, x});
    }

    sort(suitcase.begin(),suitcase.end(),comparator);

    vector<int> res(suitcase.size(), 1);

    for (int i = 1; i < suitcase.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (suitcase[j][0] < suitcase[i][0] && suitcase[j][1] < suitcase[i][1] && suitcase[j][2] < suitcase[i][2]) {
                res[i] = max(res[i], res[j] + 1);
            }
        }
    }

    cout << *max_element(res.begin(), res.end()) <<    endl;

    return 0;
}

