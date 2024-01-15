#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> ocean(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ocean[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = (ocean[i][j] == 'F' ? 1 : 0);
            } else if (i == 0) {
                if (ocean[i][j] == 'F') {
                    dp[i][j] = dp[i][j-1] + 1;
                } else {
                    dp[i][j] = dp[i][j-1];
                }
            } else if (j == 0) {
                if (ocean[i][j] == 'F') {
                    dp[i][j] = dp[i-1][j] + 1;
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            } else {
                if (ocean[i][j] == 'F') {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
            if (ocean[i][j] == 'O' && dp[i][j] > 0) {
                dp[i][j]--;
            }
        }
    }
    cout << dp[n-1][m-1] << endl;
    return 0;
}

