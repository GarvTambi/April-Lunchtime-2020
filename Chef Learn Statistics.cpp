// https://www.codechef.com/ENCD2020/problems/ECAPR204

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        
	    }
	    sort(a,a+n);
	    int count=1;
	    for(int i=1;i<n;i++){
	        if(a[i]==a[i-1]){
	            count++;
	        }
	        else{
	            cout<<a[i-1]<<":"<<count<<"\n";
	            count=1;
	        }
	    }
	    cout<<a[n-1]<<":"<<count<<"\n";
	}
	return 0;
}

