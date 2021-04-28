/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;
int solve(string s){
    string a;
    cin>>a;
    int k=0;
    for(int i=0;i<s.size();++i){
        if(s[i]==a[k]){
            k++;
        }
    }

    if(k==a.size()){
        cout<<"POSITIVE\n";
    }
    else
     cout<<"NEGATIVE\n";
    return 0;
}
int main()
{   
    string s;
    cin>>s;
    int n;
    cin>>n;
    while(n--){
        solve(s);
    }
}
