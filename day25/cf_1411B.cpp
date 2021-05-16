#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define int long long

bool ok(int n)
{
	int temp = n;
	while(n > 0)
	{
		int k = n%10;
		if(k == 0)
		{
			n = n/10;
			continue;
		}
		if(temp%k != 0)
		return false;
		n = n/10;
	}
	return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);
  	int t;
  	cin>>t;
  	while(t--)
  	{
  		int n;
  		cin>>n;
  		while(!ok(n))
  		n++;
  		cout<<n<<endl;
  	}
	return 0;
}