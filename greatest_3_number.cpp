#include <iostream>
using namespace std;
int check(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "A is Greater " << endl;
    }
    else if (b > a && b > c)
    {
        cout << "B is Greater " << endl;
    }
    else
    {
        cout << "C is greater " << endl;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter a number " << endl;
    cin >> a >> b >> c;
    int ans = check(a, b, c);
    cout << ans;
    return 0;
}