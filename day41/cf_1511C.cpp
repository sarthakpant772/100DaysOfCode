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
        int main() {
      int n, q;
      scanf("%d%d", &n, &q);
      vector<int> a(n);
      for (int& x : a) scanf("%d", &x);
      while (q--) {
        int x;
        scanf("%d", &x);
        int p = find(a.begin(), a.end(), x) - a.begin();
        printf("%d ", p + 1);
        rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
      }
    }