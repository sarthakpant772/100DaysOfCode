// // #include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
void solve() {
     int a1,b1,a2,b2;
    cin>>(a1);
    cin>>(b1);
    cin>>(a2);
    cin>>(b2);
    if(a1>b1)
        swap(a1,b1);
    if(a2>b2)
        swap(a2,b2);
 
    if(a1+a2==b1 && b1==b2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int T;
	cin >> T;
	while (T--)
		solve();
}