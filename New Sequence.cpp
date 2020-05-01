// https://www.codechef.com/ENCD2020/problems/ECAPR203

#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	
	int t;
	cin>>t;
	
	while(t--){
		
		long long n;
		cin>>n;
		
		long long x = sqrtl(8*n+1);
		x+=1;
		x/=2;
		x--;
		
		x = x*(x+1)/2;
		cout<<n-x<<"\n";
	}
}
