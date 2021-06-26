#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string table[n][n];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
         {
            table[i][j] = (char)(i+'A');
            table[i][j] += (char)(j+'1');
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j != 0)
                cout << " ";
            cout << table[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j != 0)
                cout << " ";
            cout << table[n-1-j][i];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j != 0)
                cout << " ";
            cout << table[n-1-i][n-1-j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
         {
            if (j != 0)
                cout << " ";
            cout << table[j][n-1-i];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j != 0)
                cout << " ";
            cout << table[i][n-1-j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j != 0)
                cout << " ";
            cout << table[n-1-j][n-1-i];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j != 0)
                cout << " ";
            cout << table[n-1-i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j != 0)
                cout << " ";
            cout << table[j][i];
        }
        cout << endl;
    }
    return 0;
}