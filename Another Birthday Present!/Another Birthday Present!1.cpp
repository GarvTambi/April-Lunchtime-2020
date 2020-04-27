//https://www.codechef.com/LTIME83B/problems/SHUFFLE

//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

#include<bits/stdc++.h>
using namespace std;
int ara[100001],rem[100011];

void solve()
{
    int a,b;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>ara[i];
    }
    for(int i=0; i<b; i++)
    {
        int k = 0;
        for(int j=i;j<a;j+=b){
            rem[k++] = ara[j];
        }
        sort(rem, rem+k);

        k= 0;
        for(int j=i;j<a;j+=b){
            ara[j] = rem[k++];
        }
    }
    for(int i=1;i<a;i++){
        if(ara[i]<ara[i-1]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

