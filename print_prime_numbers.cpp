#include <iostream>
using namespace std;
int main()
{
    int number, c, i;
    for (number = 1; number <= 50; number++)
    {
        /* code */
        c = 0;
        for (i = 1; i <= number; i++)
        {
            /* code */
            if (number % i == 0)
            {
                c = c + 1;
                break;
            }
        }
        if (c == 2)
        {
            cout << "Prime Number " << i << endl;
        }
    }
    return 0;
}