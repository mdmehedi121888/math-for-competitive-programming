// a(N) = a(N - 1) * a(N - 2) * a(N - 3) * ... * a(2) * a(1) * a(0) + 1 where a(0) = 2.
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void easySequence(int n){
    int mod = 1e9+7;
    vector<int>v;
    v.push_back(2);
    v.push_back(3);  // a(1) = a(0)+1
    for(int i=2;i<=n;++i){
        ll sum=1;
        for(int j=0;j<i;++j){
            sum= ((sum%mod) * (v[j]%mod))%mod;
        }
        v.push_back(sum+1);
    }
    //for(auto i:v)cout<<i<<" ";
    cout<<v[n-1]<<endl;
}
void solve(){
 int n;cin>>n;
 easySequence(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}