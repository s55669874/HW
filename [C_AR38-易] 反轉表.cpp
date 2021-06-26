#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    int ans[n];
    memset(ans, 0, sizeof(ans));
    for (int i = 0; i < n; i++) 
    {
        int cnt = 0;
        for (int j = 0; j < n; j++) 
        {
            if (ans[j] == 0) 
            {
                if (cnt == num[i]) 
                {
                    ans[j] = i+1;
                    break;
                }
                else
                    cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++) 
    {
        if (i != 0)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}