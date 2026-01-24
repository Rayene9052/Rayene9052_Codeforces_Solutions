#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_gap = a[0]; // from 0 to first station
        for (int i = 0; i + 1 < n; i++) {
            max_gap = max(max_gap, a[i + 1] - a[i]);
        }
        max_gap = max(max_gap, x - a[n - 1]);

        int need_turnaround = 2 * (x - a[n - 1]);

        cout << max(max_gap, need_turnaround) << "\n";
    }

    return 0;
}
