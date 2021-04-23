// // #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int solve(){
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	int t=a-b;
	if(t<=0){
		cout<<b<<"\n";
		return 0;
	}
	if(d>=c)
	  {
		  cout<<"-1\n";
		  return 0;
	  }
    long long  x=1;
    long long  y=a-b;
// 	while((a-b)>((c-d)*x)){
// 		x++;
// 	}
	
	x=ceil(float(a-b)/float(c-d));
// 	cout<<float((a-b)/(c-d))<<" ";
	
// 	cout<<x<<"a";
     // cout<<x;
	cout<<b+(c*x)<<"\n";
	return 0; 

}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}