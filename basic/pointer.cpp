#include <bits/stdc++.h>
using namespace std;

void print(int **x){
    **x = 30;
}

int main(){
    int x = 200;
    int *p = &x;
    int **q = &p;
    print(q);
    cout<<x<<endl;
    return 0;
}