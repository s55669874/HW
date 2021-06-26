#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str, restr;
    cin >> str;
    restr = str;
    reverse(restr.begin(), restr.end());
    if (str == restr)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}