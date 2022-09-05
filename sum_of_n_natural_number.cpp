#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter a number " << endl;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        /* code */
        sum += i;
    }
    cout << sum << endl;
    return 0;
}