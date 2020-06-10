
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], cost = 0, v[n] = {0}, num1, num2;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < k; i++)
    {
        cin >> num1 >> num2;
        if (v[num1 - 1] == 0 && v[num2 - 1] == 0)
        {
            if (a[num1 - 1] > a[num2 - 1])
            {
                cost += a[num2 - 1];
            }
            else
            {
                cost += a[num1 - 1];
            }
            v[num1 - 1] = 1;
            v[num2 - 1] = 1;
        }
        else
        {
            if (v[num2 - 1] == 0 && v[num1 - 1] == 1)
                v[num2 - 1] = 1;
            else
                v[num1 - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            cost += a[i];
        }
    }
    cout << cost;
    return 0;
}