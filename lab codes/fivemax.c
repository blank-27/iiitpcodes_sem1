#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t, n, x, y;
    while (t)
    {
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            b[i] = a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[0] == b[i])
                x = i;
            if (a[n - 1] == b[i])
                y = i;
        }
        if (x < y)
            cout << a[0] << a[n - 1] << endl;
        else
            cout << a[n - 1] << a[0] << endl;

        t--;
    }
    return 0;
}
