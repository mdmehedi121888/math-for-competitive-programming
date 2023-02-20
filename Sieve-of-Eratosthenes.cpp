#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void sieve(int n){
    vector<int>v(n);
    for(int i=2;i*i<=n;++i){
        if(v[i]==0)
        for(int j=i*i;j<=n;j+=i){
            if(v[j]==0)
            v[j]=1;
        }
    }
    for(int i=2;i<=n;++i)if(v[i]==0) cout<<i<<" ";
}
void solve(){
 int n;cin>>n;
 sieve(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}