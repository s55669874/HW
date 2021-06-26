#include <iostream>
using namespace std;
int main()
{
    long int a, ans = 0;
    for(int i = 0 ; i < 6 ; i++)
    {
        cin >> a;
        ans += a*a*a;
    }
    cout << ans << endl;
}