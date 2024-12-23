#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;


void solve(){   
    ll n , x;
    cin >> n >> x;
    ll a[999+1];
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0 ; i < n ; ++i){
        for(int j = i ; j < n ; ++j){
            if(a[i] * a[i] + a[j] == x) count++;
        }
    }
    cout << count << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}