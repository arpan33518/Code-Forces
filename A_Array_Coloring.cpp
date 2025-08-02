#include <iostream>
#include <vector>
using namespace std;

void check(vector<int>arr){
    int sum1 = 0;
    int sum2 = 0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2 == 0){
            sum1 +=arr[i];
        }
        else{
            sum2 += arr[i];
        }
    }

    if(sum1 % 2 == sum2 % 2 ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

   
    }
    

int main (){
    int test ;
    cin >> test;

    while(test > 0){
        int n ;
        cin >> n ;

        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        check (arr);
        test--;
    }
    return 0;
}