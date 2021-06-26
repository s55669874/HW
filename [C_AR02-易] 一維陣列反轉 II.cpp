#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[20], i;
    for( i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    while(i > 0)
    {
        i--;
        cout << a[i];
        if(i > 0)
            cout << " ";
    }
    cout <<endl;

}