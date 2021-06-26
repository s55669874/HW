#include <iostream>
#include <algorithm>
using namespace std;

void display_reverse(int num[], int n) 
{
    for (int i = n-1; i >= 0; i--) 
    {
        if (i != n-1)
            cout << " ";
        cout << num[i];
    }
    cout << endl;
}

int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
        cin >> num[i];
    display_reverse(num, 10);
    return 0;
}