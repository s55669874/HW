#include <bits/stdc++.h>
using namespace std;
#include "my-super-LL-int.h"
typedef long long int ll;

ll rho(ll);

int main()
{
    int i, j, k;
    srand(time(NULL));
    scanf("%d", &k);

    while(k--)
    {
        ll input, res;

        scanf("%lld", &input);
        printf("%lld\n", rho(input));
    }
    return 0;
}

ll gcd(ll a, ll b)
{
    return b? gcd(b, a%b) :a;
}

SLL f(SLL x, SLL c)
{
    return x*x+c;
}
ll rho(ll n)
{
    SLL x(rand()), c(rand());

    SLL y(x), d(1);

    /*x=x+SLL(1);
    c=c+SLL(1);*/

    while(d==1)
    {
        x=f(x, c)%n;
        y=f(f(y, c)%n, c)%n;
        d=gcd((x.abs_minus(y)%n).low_bit, n);
    }
    return d.low_bit == n? rho(n): d.low_bit;
}

