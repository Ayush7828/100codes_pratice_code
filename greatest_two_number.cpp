#include <bits/stdc++.h>
using namespace std;
int check(int a, int b)
{
    if (a == b)
    {
        cout << "Both Are Equal";
    }
    else
    {
        cout << max(a, b) << " "
             << "Greater " << endl;
    }
}
int main()
{
    int num1, num2;
    cout << "Enter a number " << endl;
    cin >> num1 >> num2;
    int ans = check(num1, num2);
    cout << ans;
    return 0;
}