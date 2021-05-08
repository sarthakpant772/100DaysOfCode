#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
   int n,m;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;++i){
       cin>>a[i];
   }
   cin>>m;
   vector<int> b(m);
   for(int i=0;i<m;++i){
       cin>>b[i];
   }
  
   partial_sum(a.begin(),a.end(),a.begin());
   partial_sum(b.begin(),b.end(),b.begin());

   cout<<max(0,*max_element(a.begin(),a.end()))+max(0,*max_element(b.begin(),b.end()))<<"\n";
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