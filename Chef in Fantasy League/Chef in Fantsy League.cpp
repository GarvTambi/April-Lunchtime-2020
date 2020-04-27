// https://www.codechef.com/LTIME83B/problems/FFL/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int arr[n],df[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++)
	        cin>>df[i];
	        
	    int mina=100;
	    int minb=100;
	    for(int i=0;i<n;i++)
	    {
	        if(df[i]==1)
            {
                if(arr[i] < mina)
                    mina=arr[i];
            }
            else if(df[i]==0)
            {
                if(arr[i] < minb)
                    minb=arr[i];
            }
	    }
	    
	    if((mina + minb + s) <= 100)
	        cout<<"yes"<<"\n";
	   else
	        cout<<"no"<<"\n";
	}
	return 0;
}
