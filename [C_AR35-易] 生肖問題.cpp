#include <iostream>

using namespace std;

int main()
{
    string Zodiac[12] = {"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};
    int year;
    cin >> year;
    year += 8;
    cout << Zodiac[year%12] << endl;
    return 0;
}
