// https://www.codechef.com/ENCD2020/problems/ECAPR202

#include <bits/stdc++.h> 
//#include <math.h> //Not sure about including math.h
using namespace std;

int main()
{
    int t;
    long long int r,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&r);
        a = 2* r*r ;
        printf("%lld\n",a);
    }
    return 0;
}
