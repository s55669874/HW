#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n;
        cin >> n;
        int squ[n][n];
        int temp[n][n];
        int cnt = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++, cnt++) {
                squ[i][j] = cnt;
            }
        }
        string steps;
        cin >> steps;
        for (unsigned int i = 0; i < steps.size(); i++) {
            char step;
            step = steps[i];
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    temp[j][k] = squ[j][k];
                }
            }
            switch(step){
            case 'R':
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        squ[k][n-1-j] = temp[j][k];
                    }
                }
                break;
            case 'L':
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        squ[n-1-k][j] = temp[j][k];
                    }
                }
                break;
            case 'N':
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        squ[n-1-j][k] = temp[j][k];
                    }
                }
                break;
            default:
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%5d", squ[i][j]);
            }
            cout << endl;
        }
        if (testcase > 0)
            cout << endl;
    }
    return 0;
}