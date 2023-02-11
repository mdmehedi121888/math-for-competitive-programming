// 2+4+16+.....+n

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    int ar[]={2,4,8,16};
 int n;
 cin>>n;
 int a = ar[0];
 int r = ar[1]/ar[0];
 // nth term..
 double nthTerm = a* pow(r,n-1);
 cout<<nthTerm<<endl;

 // sum of nth term..
 double sumofnthTerm = (a*(1-pow(r,n)))/(1-r);
 cout<< sumofnthTerm<<endl;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}