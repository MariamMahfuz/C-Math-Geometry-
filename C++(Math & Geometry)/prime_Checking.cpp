#include <iostream>
using namespace std;
int main()
{
    int N, i;
    cout << "Enter a number";
    cin >> N;
    for (i = 0; i <= N / 2; i++)
    {
        if (N == 1)
        {
            cout << N << "Is not a prime number";
        }
        else if (N / i != 0)
        {
            cout << N << "is a prime number";
        }
        else
            cout << "Not a Prime Number"
    }
}