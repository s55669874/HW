#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < (int)str.size(); i++)
     {
        int num = str[i]-'0';
        num += 7;
        num %= 10;
        str[i] = num+'0';
    }
    swap(str[0], str[2]);
    swap(str[1], str[3]);
    cout << str << endl;
    return 0;
}