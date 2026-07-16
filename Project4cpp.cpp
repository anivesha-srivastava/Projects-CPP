#include<iostream>
using namespace std;

int main(){
    int num[10] = {1,2,3,4,11,22,40,98,67,43};
    int smallest = num[0];
    int largest = num[0];
    int indexSmallest=0;
    int indexLargest =0;
    for(int i=1; i<10; i++){
        if(smallest >num[i]){
            smallest = num[i];
            indexSmallest = i;
        }
        if(largest < num[i]){
            largest = num[i];
            indexLargest = i;
        }
    }
    cout << "The smallest number is " << smallest << " at " << indexSmallest << "." << endl;
    cout << "The largest number is " << largest << " at " << indexLargest << ".";
    return 0;
}