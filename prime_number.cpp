#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cout << "Enter a number " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            cout << "Not Prime Number" << endl;
            c = c + 1;
            break;
        }
    }
    if (c == 0)
    {
        cout << "Prime Number " << endl;
    }

    return 0;
}