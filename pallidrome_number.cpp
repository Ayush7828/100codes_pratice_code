#include <iostream>
using namespace std;
int ispallidrome(int num)
{

    if (num / 100 == num % 10)
    {
        cout << " It is Pallidrome Number " << endl;
    }
    else
    {
        cout << "It is not A pallidrome number " << endl;
    }
}
int main()
{

    int number;
    cout << "enter a number " << endl;
    cin >> number;
    cout << ispallidrome(number) << endl;
    return 0;
}