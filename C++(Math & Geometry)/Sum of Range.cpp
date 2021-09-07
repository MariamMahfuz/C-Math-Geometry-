#include <iostream>
using namespace std;
int main()
{
    int N, M, i;
    cin >> N >> M ;
    int sum = 0;
    for (i = N; i <= M; i++)
    {
        cout << "Total sum is" << sum + i;
        if (i % 2 == 0)
        {
            cout << "EVEN sUM" << sum + i;
        }
        if (i % 2 != 0)
        {
            cout << "Odd sUM" << sum + i;
        }
    }