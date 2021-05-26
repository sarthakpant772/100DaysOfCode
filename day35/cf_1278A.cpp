#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define ll long long
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define forn(i,n) for(int i=0;i<int(n);++i)
// char a[1000][1010];
int solve(){
  string s;
  cin>>s;
  vi count1(26);
  for(int i=0;i<s.size();++i){
      ++count1[s[i]-'a'];
  }

  string s1;
  cin>>s1;
 // s=p s1=h

  forn(i,s1.size()){
   vi count2(26);
   for(int j=i;j<s1.size();++j){
     ++count2[s1[j]-'a'];
      if(count2==count1){
        cout<<"YES\n";
        return 0;
      }
   }

    
  }

  cout<<"NO\n";
  return 0;
}

int main() {
		ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n=1;
    cin>>n;
	int i=1;
	while(n--){
		// cout<<"Case #"<<i<<": "; 
		solve();
		// i++;
	}
return 0;

}