#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int solve(){
   string s;
   int n,k;
   cin>>n>>k>>s;
   int res=1;
   int f=s.find_first_of('*'),l;
  while(true){
     int j= min(f+k,n-1);
     for(;f<j && s[j]=='.';j-- ){}
     if(f==j){
         break;
     }
     res++;
     f=j;
  }
  cout<<res<<"\n";
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