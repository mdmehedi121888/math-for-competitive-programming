// n(1) = 1
// n(2)= 2
// n(3)=3
// n(4)= 5
// f(n)=fibo(n+1)
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
 cout<<fibo(n+1);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}