#include <bits/stdc++.h>
using namespace std;

int main(){
    // int a = 100, b = 50, c = 10,  d = 200;

    // int mn;

    // mn = min(a, min(b, min(c,d)));

    // cout << mn << endl;

    // int mx;

    // mx = max(a, max(b, max(c,d)));

    // cout << mx << endl;

    int a[5] = {5,4,1,7,8};

    int mn = a[0];

    for( int i = 0 ; i < 5; i++){
        mn = min(mn, a[i]);

        cout<< "index- "<<i<<"-> "<<mn<<endl; 
    }

    cout << mn << endl;
    
    return 0;
}