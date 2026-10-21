//
// Created by OyamaHappa on 2026/10/21.
//

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int cases;
    if (!(cin >> cases) || cases < 0) {
        return 1;
    }

    while (cases--) {
        int n;
        if (!(cin >> n) || n < 1 || n > 100) {
            return 1;
        }

        int tower[100][100];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (!(cin >> tower[i][j])) {
                    return 1;
                }
            }
        }

        for (int i = n - 2; i >= 0; --i) {
            for (int j = 0; j <= i; ++j) {
                tower[i][j] += max(tower[i + 1][j], tower[i + 1][j + 1]);
            }
        }
        cout << tower[0][0] << '\n';
    }
    return 0;
}
