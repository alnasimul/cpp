#include <bits/stdc++.h>
using namespace std;

int main()
{
    // dynamic memory allocation using c syntax
    // int *p = (int*) malloc(10 * sizeof(int));

    // int *p = (int *)calloc(10, sizeof(int));

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // free(p);

    // dynamic memory allocation using c++ syntax

    int *p = new int[10] {5, 10, 20, 30, 40, 50, 60, 70, 100, 200} ;

    for( int i = 0; i < 10 ; i++){
        cout << p[i] << endl;
    }

    // to free the pointer p we use delete keyword which example given below
    delete p;

    return 0;
}