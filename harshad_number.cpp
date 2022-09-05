#include <iostream>
using namespace std;
int harshadnumber(int num)
{
    int sum = 0;
    int temp = num;
    while (temp != 0)
    {
        /* code */
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}
int main()
{

    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    if (harshadnumber(number))
    {
        cout << "Yes It is Harshad number " << number;
    }
    else
    {
        cout << "It is Not a harsahd Number " << number;
    }
}
// Initialize a variable sum = 0 Extract each digit of num
//     Add each digit to sum variable
//         If at the end num is completely divisible by sum
//             Then its a harshad’s number
// A Harshad number is a positive integer
//  that is divisible by the sum of the digits of the integer.It is also called the Niven number.