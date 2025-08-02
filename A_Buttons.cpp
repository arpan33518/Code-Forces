#include <iostream>
#include <vector>
using namespace std;

void check(int a, int b, int c)
{

    if (c % 2 == 1)
    {
        if (b > a)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
    else
    {
        if (b < a)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}

int main()
{
    int test;
    cin >> test;

    while (test > 0)
    {

        int a, b, c;
        cin >> a >> b >> c;
        check(a, b, c);
        test--;
    }
    return 0;
}