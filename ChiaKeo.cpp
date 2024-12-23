#include<iostream>
using namespace std;
typedef long long ll;

void Solve(){
    ll n , m , a[999+1],jen,count = 0; 
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        if(m % (a[i] + 1) != 0){
            jen = m - ((m / (a[i] + 1) * a[i]));
        }else{
            jen = m /(a[i] + 1);
        }
        count += jen;
    }
    cout << count;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        Solve();
    }
    return 0;    
}