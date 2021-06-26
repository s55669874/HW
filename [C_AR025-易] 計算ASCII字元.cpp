#include <iostream>
#include <memory.h>
using namespace std;
int main()
{
 string str;
    getline(cin, str);
    int sum[128];
    memset(sum, 0, sizeof(sum));
    for (unsigned int i = 0; i < str.length(); i++) 
    {
        if((int)str[i] > 31 && (int)str[i] < 127)
            sum[(int)str[i]]++;
    }
    for (int i = 127; i >= 32; i--)
    {
        if (sum[i] > 0)
            cout << i << " " << sum[i] << endl;
    }
 return 0;
}