#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    else
   gcd(b,a%b);
}
void solve(){
 int a,b;cin>>a>>b;
 cout<<gcd(a,b)<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}