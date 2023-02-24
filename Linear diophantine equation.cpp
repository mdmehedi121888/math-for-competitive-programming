#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int a,b,c;cin>>a>>b>>c;
 if(c%__gcd(a,b)==0)
 cout<<"true";
 else
 cout<<"false";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}