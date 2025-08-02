#include <iostream>
#include <vector>
using namespace std;


void check(vector<int>arr){
    int Num =0;
    for(int i=0;i<arr.size();i++){
        Num+=arr[i];
    }
    cout << (0-Num) << endl;
}

int main (){
    int test ;
    cin >> test;

    while(test > 0){
        int n;
        cin >> n;

        vector<int>arr(n);

        for(int i=0; i<n-1; i++){
            cin >> arr[i];
        }
        check (arr);
        test--;
    }
    return 0;
}