#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int gcd(int a,int b,int &x ,int &y){
    if(b==0){
         x=1;
    y=0;
    return a;
    }
     int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
   
}
void solve(){
    int a,b,x,y;cin>>a>>b;
 cout<<gcd(a,b,x,y)<<endl;
 cout<<x<<" "<<y;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}