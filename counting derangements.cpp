#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int dCount(int n){
    if(n<=2)
    return n-1;
    else{
        int a=0,b=1,c;
        for(int i=3;i<=n;++i){
            c = (i-1)*(a+b);
            a=b;
            b=c;
        }
        return c;
    }
}
void solve(){
 int n;cin>>n;
 cout<<dCount(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}