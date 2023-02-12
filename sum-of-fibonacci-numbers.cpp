// f(n) = fibo(n+2)-1;

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int sumOfFibonacci(int n){
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
 cout<<sumOfFibonacci(n+2)-1;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}