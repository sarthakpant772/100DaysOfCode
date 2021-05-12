#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int solve(){
    
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	vector<int> b(n);
	b=a;
	sort(a.begin(),a.end(),greater<int>());
	ll ans=0;
for (int i = 0; i <= k; i++) {
		ans += a[i];
	}
    cout<<ans<<"\n";
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