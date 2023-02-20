#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void primeFactor(int n){
    vector<int>v(n+1);
    cout<<1<<" ";
    for(int i=2;i<=n;++i){
        if(v[i]==0){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i){
                if(v[j]==0) 
                v[j]+=i;
            }
        }
        else 
        cout<<v[i]<<" ";
    }
}
void solve(){
 int n;cin>>n;
 primeFactor(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}