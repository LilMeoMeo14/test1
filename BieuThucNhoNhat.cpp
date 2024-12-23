    #include<iostream>
    using namespace std;
    typedef long long ll;

    void Solve(){
        int n;
        int a[999+1];
        int sum = 0;
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            sum+= a[i];
        }
        ll result; 
        (float(sum / n) + 0.5 <= sum / n + 1) ? result = sum / n : result = sum / n + 1;
        cout << result;
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