#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num, base;
    cin >> num >> base;
    string ans = "";
    while (num >= base) 
    {
        int temp = num%base;
        if (temp > 9)
            ans += (char)(temp-10+'a');
        else
            ans += (char)(temp+'0');
        num /= base;
    }
    if (num > 0) 
    {
        if (num > 9)
            ans += (char)(num-10+'a');
        else
            ans += (char)(num+'0');
    }
    reverse(ans.begin(), ans.end());
    cout << "The base " << base << " representation of " << num << " is ";
    cout << ans << "." << endl;
    return 0;
}