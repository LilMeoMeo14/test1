#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
void Solve(){
    ll n;
    cin >> n;
    ll a = sqrt(n);
    while(n % a != 0 ){
        a--;
    }
    cout << a <<" " << n / a;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int test;
    cin >> test;
    while(test--){
        Solve();
    }
    return 0;
}