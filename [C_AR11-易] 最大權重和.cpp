#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int m, n, k;
        cin >> m >> n >> k;
        int matrix[m][n];
        memset(matrix, 0, sizeof(matrix));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        int _max = -100000000;
        for (int i = 0; i < m-k+1; i++) {
            for (int j = 0; j < n-k+1; j++) {
                int sum = 0;
                for (int x = i; x < i+k; x++) {
                    for (int y = j; y < j+k; y++) {
                        sum += matrix[x][y];
                    }
                }
                if (sum > _max)
                    _max = sum;
            }
        }
        cout << _max << endl;
    }
    return 0;
}