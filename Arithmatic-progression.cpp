// 5+10+20+.....+n

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    int ar[]={5,10,15,20};
 int n;
 cin>>n;
 int a = ar[0];
 int d = ar[1]-ar[0];
 // nth term..
 int nthTerm = a+(n-1)*d;
 cout<<nthTerm<<endl;

 // sum of nth term..
 double sumofnthTerm = n/2.0 * ((2*a)+((n-1)*d));
 cout<< sumofnthTerm<<endl;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}