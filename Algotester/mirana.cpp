#include <iostream>
#include <vector>
using namespace std;

int maxArrows(const vector<int>& distances, int k) {
    int n = distances.size();
    vector<long long> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + distances[i - 1];
    }

    int result = 0;

    for (int start = 0; start < n; start++) {
        int left = 1;
        int right = n - start;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            long long sum = prefixSum[start + mid] - prefixSum[start];
            if (sum <= k) {
                result = max(result, mid);
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }

    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> distances(n);
    for (int i = 0; i < n; i++) {
        cin >> distances[i];
    }

    cout<< maxArrows(distances, k);


    return 0;
}

