#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check(vector<int> a, vector<int> b, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int rem = a[i] % k;
        int subs = k - rem;
        int rem2 = subs % k;
        a[i] = min(rem, rem2);
    }
    for (int i = 0; i < n; i++)
    {
        int rem = b[i] % k;
        int subs = k - rem;
        int rem2 = subs % k;
        b[i] = min(rem, rem2);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

int main()
{
    int test;
    cin >> test;

    while (test > 0)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        check(a, b, n, k);
        test--;
    }
    return 0;
}