#include <iostream>

using namespace std;

int main()
{
    char eng;
    string num;
    cin >> eng >> num;
    int x, x1, x2, p;
    char index[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'W', 'Z', 'I', 'O'};
    for (int i = 0; i < 26; i++) 
    {
        if (eng == index[i]) 
        {
            x = i + 10;
            break;
        }
    }
    x1 = x/10;
    x2 = x%10;
    p =  x1 + (9*x2) + (8*(num[0]-'0')) + (7*(num[1]-'0')) + (6*(num[2]-'0')) + (5*(num[3]-'0')) + (4*(num[4]-'0')) + (3*(num[5]-'0')) + (2*(num[6]-'0')) + (num[7]-'0') + (num[8]-'0');

    if (p % 10 == 0)
        cout << "CORRECT!!!" << endl;
    else
        cout << "WRONG!!!" << endl;
    return 0;
}