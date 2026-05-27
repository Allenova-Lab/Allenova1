#include <bits/stdc++.h>

using namespace std;

using Int64 = long long;

const int DIM = 505;
int grid[DIM][DIM];
Int64 region_sum[DIM][DIM];

void run_process() {
    int n, s, m;
    if (!(cin >> n >> s >> m)) return;

    int limit = n - s;
    Int64 record = 0;

    for (int k = 0; k < m; ++k) {
        int r, c, next_val;
        cin >> r >> c >> next_val;
        
        int row = r - 1;
        int col = c - 1;

        int change = next_val - grid[row][col];
        grid[row][col] = next_val;

        int row_low = (row - s + 1 > 0) ? (row - s + 1) : 0;
        int row_high = (row < limit) ? row : limit;
        
        int col_low = (col - s + 1 > 0) ? (col - s + 1) : 0;
        int col_high = (col < limit) ? col : limit;

        for (int i = row_low; i <= row_high; ++i) {
            for (int j = col_low; j <= col_high; ++j) {
                region_sum[i][j] += change;
                if (region_sum[i][j] > record) {
                    record = region_sum[i][j];
                }
            }
        }

        cout << record << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    run_process();

    return 0;
}