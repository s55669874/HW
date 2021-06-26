#include <iostream>

using namespace std;

int main()
{
    string Constellations[12] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};
    int month, day;

    cin >> month >> day;

    switch(month)
    {
    case 1:
        if (day < 21)
            cout << Constellations[11];
        else
            cout << Constellations[0];
        break;
    case 2:
        if (day < 19)
            cout << Constellations[0];
        else
            cout << Constellations[1];
        break;
    case 3:
        if (day < 21)
            cout << Constellations[1];
        else
            cout << Constellations[2];
        break;
    case 4:
        if (day < 21)
            cout << Constellations[2];
        else
            cout << Constellations[3];
        break;
    case 5:
        if (day < 22)
            cout << Constellations[3];
        else
            cout << Constellations[4];
        break;
    case 6:
        if (day < 22)
            cout << Constellations[4];
        else
            cout << Constellations[5];
        break;
    case 7:
        if (day < 23)
            cout << Constellations[5];
        else
            cout << Constellations[6];
        break;
    case 8:
        if (day < 24)
            cout << Constellations[6];
        else
            cout << Constellations[7];
        break;
    case 9:
        if (day < 24)
            cout << Constellations[7];
        else
            cout << Constellations[8];
        break;
    case 10:
        if (day < 24)
            cout << Constellations[8];
        else
            cout << Constellations[9];
        break;
    case 11:
        if (day < 23)
            cout << Constellations[9];
        else
            cout << Constellations[10];
        break;
    case 12:
        if (day < 22)
            cout << Constellations[10];
        else
            cout << Constellations[11];
        break;
    default:
        break;
    }
    cout << endl;
    return 0;
}