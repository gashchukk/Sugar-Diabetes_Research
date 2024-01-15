#include <iostream>
#include<vector>
using namespace std;



int main() {
    int n, k, m;
    cin >> n >> k;
    vector<int> moves(k);
    for (int i = 0; i < k; i++) {
        cin >> moves[i];
    }
    cin >> m;
    vector<bool> holes(n);
    for (int i = 0; i < m; i++) {
        int hole;
        cin >> hole;
        holes[hole] = true;
    }

    vector<int> dp(n, n+1);
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        if (holes[i]) {
            continue;
        }
        for (int j = 0; j < k; j++) {
            if (i - moves[j] >= 0) {
                dp[i] = min(dp[i], dp[i - moves[j]] + 1);
            }
        }
    }

    if (dp[n - 1] == n+1) {
        cout << -1 << endl;
    } else {
        cout << dp[n - 1] << endl;
    }

    return 0;
}
