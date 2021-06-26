#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double testcase;
    cin >> testcase;
    double ch = 0, eng = 0, math = 0;
    for (int i = 0; i < testcase; i++) 
    {
        double c, e, m;
        cin >> c >> e >> m;
        ch += c;
        eng += e;
        math += m;
    }
    cout << fixed << setprecision(1) << (floor((ch+eng+math)/(3.0*testcase)*10 + 0.5))/10 << " " << (floor(ch/testcase*10 + 0.5))/10 << " " << (floor(eng/testcase*10+0.5))/10 << " " << (floor(math/testcase*10+0.5))/10 << endl;
    return 0;
}