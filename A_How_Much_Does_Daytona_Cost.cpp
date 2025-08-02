#include <iostream>
#include <vector>
using namespace std;

void check(vector<int>arr,int k){
    int find = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == k){
            find++;
        }
    }

    if(find >=1 ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    }
    

int main (){
    int test ;
    cin >> test;

    while(test > 0){
        int n , k;
        cin >> n >> k;

        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        check (arr,k);
        test--;
    }
    return 0;
}