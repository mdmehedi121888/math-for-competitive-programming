#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void divisors(int n){
for(int i=1;i*i<=n;++i){
    if(n%i==0) {
        cout<<i<<" ";
    if(i!=(n/i)) cout<<n/i<<" ";
}
}
cout<<"\n";
}
void solve(){
 int n;cin>>n;
 divisors(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}