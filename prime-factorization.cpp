// 24 = 2*2*2*3
// 15 = 3*5 only prime er multiple
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void primeFactorization(int n){
for(int i=2;i*i<=n;++i){
if(n%i==0){
    while(n%i==0){
        n = n/i;
        cout<<i<<" ";
    }
}
}
if(n>1) cout<<n<<endl;
}
void solve(){
 int n;cin>>n;
 primeFactorization(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}