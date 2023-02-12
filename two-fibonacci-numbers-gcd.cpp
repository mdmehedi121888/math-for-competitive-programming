#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int fibonacci(int d){
    if(d<=1) 
    return d;
    int a=0,b=1,c;
    for(int i=2;i<=d;++i){
        c = a+b;
        a=b;
        b=c;
    }
    return c;
}
int fibonacciGcd(int n,int m){
    int d = __gcd(n,m);
     fibonacci(d);
}
void solve(){
 int n,m;cin>>n>>m;
 cout<<fibonacciGcd(n,m);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}