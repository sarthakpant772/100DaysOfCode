#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define vi vector<int>
char a[1000][1010];
int solve(){
	long long n,m,k;
	cin>>n;
// 	n/=2;
     ll ans=0;
     for(int i=1;i<=n/2;++i){
          ans+=i*1ll*i;
     }
     cout<<ans*8<<"\n";
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