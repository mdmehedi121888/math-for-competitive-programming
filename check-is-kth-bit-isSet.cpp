#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n,k;cin>>n>>k;
 --k;
if((n>>k)&1 == 1)
cout<<"Yes Set";
else
cout<<"No Set";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}