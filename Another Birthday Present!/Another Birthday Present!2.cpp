//https://www.codechef.com/LTIME83B/problems/SHUFFLE

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,p,i;
  
  cin>>t;
  for(int j=0;j<t;j++)
  {
     long long int k,n,c=0,x=0;
     cin>>n>>k;
     long long int a[n];
     long long int g[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     if(k==1)
     {
         cout<<"yes"<<endl;
         c++;
         goto exit;
     }
         for(i=0;i<k;i++)
         {
           while((i+x*k)<n)
           {
            g[x]=a[i+x*k];
            x++;
           }
           sort(g,g+x);
           p=0;
           while(p<x)
           {
               a[i+p*k]=g[p];
               p++;
           }
           x=0;
         }
     for(i=0;i<n-1;i++)
     {
         if(a[i]>a[i+1])
         {
            c++;
            cout<<"no"<<endl;
            break;
         }
     }
     exit:
     if(c==0)
     {
         cout<<"yes"<<endl;
     }
     
  }
  return 0;
}

