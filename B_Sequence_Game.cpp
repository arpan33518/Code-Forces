#include <iostream>
#include <vector>
using namespace std;

void check(vector<int> arr)
{
    vector<int> ans;
    ans.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
        {
            ans.push_back(arr[i]);
        }
        else if (arr[i] < arr[i - 1])
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }
        else
        {
            ans.push_back(arr[i]);
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " ;
    }
    cout << endl ;
}

int main()
{
    int test;
    cin >> test;

    while (test > 0)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        check(arr);
        test--;
    }
    return 0;
}