#include <iostream>
#include <vector>
using namespace std;

void check(vector<int> a, vector<int> b, int n)
{

    bool iterate = false;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {   
            // cout << a[i] <<endl << b[i]<<endl;
            // cout << a[i] - b[i] << endl;
            count += a[i] - b[i];
            // cout << count << endl;
            iterate = true;
        }
    }
    if (iterate)
    {
        cout << (count + 1) << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}

int main()
{
    int test;
    cin >> test;

    while (test > 0)
    {
        int n;
        cin >> n;

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
        check(a, b, n);
        test--;
    }
    return 0;
}