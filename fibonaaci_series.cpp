#include <iostream>
using namespace std;
int fib(int num)
{
    int t1 = 0, t2 = 1, t3;
    for (int i = 1; i < num; i++)
    {
        /* code */
        t3 = t1 + t2;
        cout << t3 << endl;
        t1 = t2;
        t2 = t3;
    }
    return 0;
}
int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    int ans = fib(number);
    cout << ans;
}