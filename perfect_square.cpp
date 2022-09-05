#include <bits/stdc++.h>
using namespace std;
int checkperfectsquare(int num)
{
    if (ceil((double)sqrt(num)) == floor((double)sqrt(num)))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False";
    }
}
int main()
{
    int num;
    cout << "Enter a number " << endl;
    cin >> num;
    checkperfectsquare(num);
    return 0;
}