#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x[100], tmp;
    int i = 0;
    while(cin >>tmp)
    {
        x[i] = tmp;
        i++;
    }
    while(i > 0)
    {
        i--;
        cout << x[i];
        if(i > 0)
            cout<<" ";
        if(i == 0)
            cout << endl;
    }
}
