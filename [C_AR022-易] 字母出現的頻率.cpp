#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), [](char ch) )
    {
                return tolower(ch);
    };
    int cnt[26];
    memset(cnt, 0, sizeof(cnt));
    for (unsigned int i = 0; i < str.size(); i++) 
    {
        if (isalpha(str[i]))
            cnt[str[i]-'a']++;
    }
    for (int i = 0; i < 26; i++) 
    {
        if (i != 0)
            cout << " ";
        cout << cnt[i];
    }
    cout << endl;
    return 0;
}