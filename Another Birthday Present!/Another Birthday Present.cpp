//https://www.codechef.com/LTIME83B/problems/SHUFFLE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int i,c=1,temp,flag=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        while(c!=0){
            c=0;
            for(int i=0;i<n-k;i++){
                if(a[i]>a[i+k]){
                    temp=a[i];
                    a[i]=a[i+k];
                    a[i+k]=temp;
                    c++;
                }
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}
