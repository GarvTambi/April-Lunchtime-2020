// https://www.codechef.com/LTIME83B/problems/FFL/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll  a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll p=INT_MAX;  // Values of INT_MAX = +2147483647
        ll q=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            if(b[i]==0)
            p=min(p,a[i]);
            else
            q=min(q,a[i]);
        }
        ll z=p+q+s;
        if(z>100)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
        
    }
    return 0;
}
