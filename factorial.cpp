#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number " << endl;
    cin >> number;
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        /* code */
        fact = fact * i;
        cout << "Factorial = " << fact << endl;
    }
    return 0;
}