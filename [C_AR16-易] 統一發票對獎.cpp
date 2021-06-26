#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int main()
{
    string special;
    string num[3];
    int prize[7];
    int price[7] = {200, 1000, 4000, 10000, 40000, 200000, 2000000};
    long int total = 0;
    memset(prize, 0, sizeof(prize));

    cin >> special;
    reverse(special.begin(), special.end());
    for (int i = 0; i < 3; i++) 
    {
        cin >> num[i];
        reverse(num[i].begin(), num[i].end());
    }
    int testcase;
    cin >> testcase;

    while (testcase--) 
    {
        string invoice;
        cin >> invoice;
        reverse(invoice.begin(), invoice.end());

        if (invoice == special) 
        {
            prize[6]++;
            continue;
        }
        int best = 0;
        for (int i = 0; i < 3; i++) 
        {
            int win = 0;
            for (unsigned int j = 0; j < invoice.length(); j++) 
            {
                if (win == (int)j) 
                {
                    if (invoice[j] == num[i][j])
                        win++;
                }
                else
                    break;
            }
            if (win > best)
                best = win;
        }
        if (best >= 3)
            prize[best-3]++;
    }

    for (int i = 6; i >= 0; i--) 
    {
        if (i != 6)
            cout << " ";
        cout << prize[i];
        total += prize[i] * price[i];
    }
    cout << endl;
    cout << total << endl;
    return 0;
}