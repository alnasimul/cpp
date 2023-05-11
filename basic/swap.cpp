#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,8,5,7,9,0} , n = 7;

    for ( int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n ; j++){
            if(a[i] > a [j]){
                
                // swap operation in c

                // int temp = a[i];
                // a[i] = a [j];
                // a[j] = temp;

                // swap operation in c++

                swap(a[i], a[j]);


            }
        }
    }

    for ( int i = 0 ; i < n; i++){
        cout<< a[i] << " ";
    }

    return 0;

} 