#include<iostream>
#include<vector>
 
using namespace std;
 
int solve(){
	int n;
	cin>>n;
	if(n==1)
	  {
		  cout<<"0\n";
		  return 0;
	  }
	if(n==2 )
	  {
	       cout<<"-1\n";
	       return 0;
	  }
	  int t=0;
	  int sum=0;
	while(t<=2  && n!=1){
		if(n%2==0 && n%3==0){
			n/=6;
			sum++;
			t=0;
		}
		else{
			n*=2;
			sum++;
			t++;
		}
 
	} 
     if(t==0)
	cout<<sum<<"\n";
	else
	 cout<<"-1\n";
	return 0; 
}
 
 
 
int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}