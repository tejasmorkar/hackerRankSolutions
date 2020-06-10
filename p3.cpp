
#include <iostream>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int num1 = 1, num2 = 2, wait = 3, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != num1 && a[i] != num2)
        {
            flag = 1;
            break;
        }
        num1 = a[i];
        num2 = wait;
        if (a[i] == 3)
        {
            wait = 3 - wait;
            continue;
        }
        if (wait == 3)
        {
            wait = 3 - a[i];
            continue;
        }
        else
            wait = 3;
    }
    if (flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}