#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isPrime(int n){
if(n<2)
return false;
if(n==2 || n==3)
return true;
if(n%2==0 || n%3==0)
return false;
for(int i=5;i*i<=n;i+=6)
if(n%i==0)
return false;
return true;
}
void solve(){
 int n;cin>>n;
 cout<<isPrime(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}