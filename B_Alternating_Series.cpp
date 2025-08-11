#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void check(int n)
{

    vector<int> ans(n);

    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = 3;
            }
        }
        ans[n-1]=2;
    }
    else
    {
        for (int i = 0; i < n ; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = 3;
            }
        }
    }

    for(int i=0; i<n;i++){
        cout << ans[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;

    while (test > 0)
    {
        int n;
        cin >> n;

        check(n);
        test--;
    }
    return 0;
}