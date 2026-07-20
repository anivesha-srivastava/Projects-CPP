#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
    //maxSubArray
    vector<int> vec;
    vec = {-5,-8,5,9,3,5,-1,-4,8,2,3,4,9,0,-9};
    // vec = {1,2,3,4,5};

    //O(n^3)
    // for(int i=0; i<vec.size(); i++){
    //     for(int j=i; j<vec.size(); j++){
    //         for(int k=i; k<=j; k++){
    //             cout << vec[k];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "\n\n\n";
    // // O(n^2)
    // int maxSum = INT_MIN;
    // for(int i=0; i<vec.size(); i++){
    //     int currSum = 0;
    //     for(int j=i; j<vec.size(); j++){
    //         currSum += vec[j];
    //         maxSum = std::max(currSum, maxSum);
    //     }
    // }
    // cout << "Your maximum subarray : " << maxSum ;
    // cout << "\n\n";
    //O(n)
    cout << "kadane's Algorithm" << endl;
    int currSum=0;
    int maxSum = INT_MIN;
    for(int value: vec){
        currSum += value;
        maxSum = max(currSum,maxSum);

        if(currSum < 0){
            currSum=0;
        }
    }
    cout << "Your maximum subarray : " << maxSum ;
    return 0;
}