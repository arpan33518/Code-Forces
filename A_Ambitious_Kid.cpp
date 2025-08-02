#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void check(vector<int>arr){
    int find = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        find = min(find , abs(arr[i]));
    }

    if(find < 0){
        cout << -find;
    }
    else{
        cout << find;
    }
    }
    

int main (){
   

        int n ;
        cin >> n;

        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        check (arr);
        
    
    return 0;
}