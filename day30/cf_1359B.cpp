#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
char a[1000][1010];
int solve(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int sumx=0;int sumy=0;
     int p=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];
			if(m==1){
				if(a[i][j]=='.')
				sumx++;
			}
			if(a[i][j]=='.')
			  p++;
		}
	}

	if(m==1){
		cout<<sumx*x<<"\n";
		return 0;
	}
	if(x*2<y){
	     cout<<p*x<<"\n";
	     return 0;
	}

	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(j!=m-1){
				if(a[i][j]=='.')
				  {
					  if(a[i][j+1]=='.'){
						  a[i][j]='*';
						  a[i][j+1]='*';
						  sumy++;
					  }
					  else{
						  sumx++;
						  a[i][j]='*';
					  }
				  }
			}
			else if(j==m-1){
				if(a[i][j]=='.'){
					sumx++;
					a[i][j]='*';
				}
			}
			
				
			
		}
	}
// 	cout<<sumx<<" "<<sumy;
	if(x*2<y){
	     y=x;
	}
	cout<<(sumx*x)+(sumy*y)<<"\n";
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