#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n;cin>>n;
 int res = 0;
 for(int i=1;i<=n;++i){
    int x;cin>>x;
    res ^= x;
    res ^= i;
 }
 res ^= n+1;
 cout<<res;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}