// fact 5 = 1**3*4*5 = 120 
// n = 2  ...
// 120 % 8 == 0     which is 2^3
// 3 is the maximum power
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int maximumPrimeFactor(int n){
    int res = -1;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            while(n%i==0){
                n = n/i;
                res = i;
            }
        }
    }
    if(n>res)
    res = n;
    return res;
}
void solve(){
 int fact,n;cin>>fact>>n;
 int p = maximumPrimeFactor(n);
 int ans=0;
 while(fact>0){
    fact = fact / p;
    ans+=fact;
 }
 cout<<ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}