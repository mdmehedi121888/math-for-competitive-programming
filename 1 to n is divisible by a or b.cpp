#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n,a,b;cin>>n>>a>>b;
 cout<<n/a+n/b-n/(a*b);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}