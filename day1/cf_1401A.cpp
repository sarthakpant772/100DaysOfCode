    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<cmath>
    using namespace std;
    int solve(){
      long long  a,k;
      cin>>a>>k;
      if(k>a){
        cout<<abs(k-a)<<"\n";
      }
      else{
        if(a==k)
          cout<<"0\n";
        else if(abs(k-a)%2!=0)
          cout<<"1\n";  
          else
           cout<<"0\n";
      }
    return 0;
    }  
     
    int main(){
        long long  t;
        cin>>t;
        while(t--){
            solve();
        }
        return 0;
    }