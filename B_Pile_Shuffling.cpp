#include <iostream>
using namespace std;

void check(){

}

int main()
{

    int test;
    cin >> test;

    while (test > 0)
    {

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int ai, bi, ci, di;
            cin >> ai >> bi >> ci >> di;
        }
        check(ai , bi , ci ,di)
        test--;
    }

    return 0;
}