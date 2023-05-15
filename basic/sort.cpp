#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[5] = {5, 4, 3, 2, 1}, n = 5;

    // bulit in sort function for c++

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
