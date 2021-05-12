#include <bits/stdc++.h>
#include<iostream>
#include<vector>

int n[15][15];
using namespace std;
int solve(){
   int n;
   cin>>n;
   if(n==2){
       cout<<"-1\n";
       return 0;
   }
   if(n==1){
       cout<<"1\n";
       return 0;
   }
   vector<int> a(n*n);
   int j=0;
   for(int i=1;i<=n*n;++i){
       if(i%2!=0){
           a[j]=i;
           j++;
       }
   }
   for(int i=1;i<=n*n;++i){
       if(i%2==0){
           a[j]=i;
           j++;
       }

   }
   for(int i=0;i<n*n;++i){
       cout<<a[i]<<" ";
       if((i+1)%n==0 && i+1>=n){
           cout<<"\n";
       }
   }
   return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n=1;
    cin>>n;
	while(n--){
		solve();
	}
return 0;

}