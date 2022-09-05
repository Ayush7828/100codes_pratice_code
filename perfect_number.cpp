// perfect number, a positive integer that is equal to the sum of its proper divisors.
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter a num";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
    {
        cout << "It is perfect Number " << endl;
    }
    else
    {
        cout << "It is not a perfect Number " << endl
    }
}