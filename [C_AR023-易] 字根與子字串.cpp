#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string sub, str;
    cin >> sub >> str;
    size_t pos = 0;
    pos = str.find(sub);
    if (pos == string::npos)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}