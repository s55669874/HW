#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--) 
    {
        int n, m, l;
        cin >> n >> m >> l;
        int candy[n][m];
        memset(candy, 0, sizeof(candy));
        int cnt = 0;
        while (l--) {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            if (candy[x][y] == 0)
                cnt++;
            candy[x][y]++;
            if (x-1 >= 0) 
            {
                if (candy[x-1][y] == 0)
                    cnt++;
                candy[x-1][y]++;
            }
            if (x+1 < n) 
            {
                if (candy[x+1][y] == 0)
                    cnt++;
                candy[x+1][y]++;
            }
            if (y-1 >= 0) 
            {
                if (candy[x][y-1] == 0)
                    cnt++;
                candy[x][y-1]++;
            }
            if (y+1 < m) 
            {
                if (candy[x][y+1] == 0)
                    cnt++;
                candy[x][y+1]++;
            }
        }
        if (cnt == n*m)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}