#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int eulerTotient(int n){
    int res = n;
    for(int i=2;i*i<=n;++i){
        if(res%i==0){
            while(n%i==0)
            n = n/i;
            res = res - res/i;
        }
    }
    if(n>1)
    res = res- res/n;
    return res;
}
void solve(){
 int n;cin>>n;
 cout<<eulerTotient(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}