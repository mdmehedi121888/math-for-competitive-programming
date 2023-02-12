//  n(1)- {0,1} 
// n(2)- {00,01,10};
// n(3)-{000,001,010,100,101};
// f(n) = fibo(n+2); 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int fibo(int n){
if(n<=1)
return n;
int a=0,b=1,c;
for(int i=2;i<=n;++i){
    c=a+b;
    a=b;
    b=c;
}
return c;
}
void solve(){
 int n;cin>>n;
 cout<<fibo(n+2);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}