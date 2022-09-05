#include <bits/stdc++.h>

using namespace std;
int main()
{

    int number;
    cout << "Enter a number " << endl;
    cin >> number;

    if (number > 0)
    {
        cout << "This is positive number " << endl;
    }
    else if (number < 0)
    {
        cout << "This is negative number " << endl;
    }

    else
    {
        cout << "Wrong Alphabet Input Please Write Integer Value" << endl;
    }
    return 0;
}