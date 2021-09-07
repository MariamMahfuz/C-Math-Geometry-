#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, i;
    cout << "Enter your number";
    cin >> N;
    for (i = 1; i <= N / 2; i++)
    {
        if (N % (pow(2,i)) == 0)
        {
            cout << "Yes";
        }
        else
            cout << "No"
    }
}
