#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void primeFactor(int n){
    vector<int>v(n+1);
    for(int i=2;i<=n;++i){
        if(v[i]==0){
            v[i]+=i;
            for(int j=i*i;j<=n;j+=i){
                v[j]+=i;
            }
        }
    }
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        while(x>1){
            cout<<v[x]<<" ";
            x = x / v[x];
        }
        cout<<endl;
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