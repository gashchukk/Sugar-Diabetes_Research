#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int res;
    res = *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end());
    cout<<res;
    return 0;
}
