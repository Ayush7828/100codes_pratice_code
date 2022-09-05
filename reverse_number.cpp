#include <iostream>
using namespace std;
int main()
{
    int number, r, sum = 0;
    cout << "Enter a number " << endl;
    cin >> number;
    for (int i = number; number != 0; number = number / 10)
    {
        /* code */ r = number % 10;
        sum = sum * 10 + r;
    }
    cout << sum << endl;
}