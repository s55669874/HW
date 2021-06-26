#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool exist[n];
    memset(exist, false, sizeof(exist));
    bool notsame = true;
    while (n--) 
    {
        int num;
        cin >> num;
        if (exist[num-1] == false)
            exist[num-1] = true;
        else
            notsame = false;
    }
    cout << notsame << endl;
    return 0;
}