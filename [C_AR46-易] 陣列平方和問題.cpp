#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double num, total = 0;
    while (cin >> num) 
    {
        total += pow(num, 2);
    }
    cout << fixed << setprecision(6) << total << endl;
    return 0;
}