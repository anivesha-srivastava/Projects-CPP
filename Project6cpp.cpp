#include <iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5,6,7,4,5,7,2,4,6,1};
    int arr2[] ={7,3,8,9,2,5,9,5,0,5,3,1,8};
    int size1 = sizeof(arr)/sizeof(int);
    int size2 =sizeof(arr2)/sizeof(int);
    cout << "1. Unique value in an array.\n";
    cout << "2. Intersection of two arrays.\n";

    cout << "Which one do you want to try : ";
    int n; cin >> n;
     if(n==1){
        cout << "On which array -> arr(1) or arr2(2) ? : ";
        int choice; cin >> choice;
        if(choice==1){
            bool unique = true;
            for(int i=0; i<size1; i++){
                for(int j=0; j<size1; j++){
                    if(i!=j && arr[i]==arr[j]){
                        unique = false;
                        break;
                    }
                }
                if(unique == true){
                    cout << arr[i] << " is unique in the array." << endl;
                }
                unique=true;
            }
        }
        else if(choice==2){
            bool unique = true;
            for(int i=0; i<size2; i++){
                for(int j=0; j<size2; j++){
                    if(i!=j && arr2[i]==arr2[j]){
                        unique = false;
                        break;
                    }
                }
                if(unique == true){
                    cout << arr2[i] << " is unique in the array." << endl;
                }
                unique=true;
            }
        }
        else{
            cout << "You have entered out of bounds choice.\n" ;
            cin.ignore(10000,'\n');
        }
     }
     else if(n==2){
        cout << "{ ";
        for(int i=0; i<size1; i++){
            bool alreadyPrinted = false;
            for(int k=0; k<i; k++){
                if(arr[i]==arr[k]){
                    alreadyPrinted=true;
                    break;
                }
            }
            if(alreadyPrinted)
                continue;
            for(int j=0; j<size2; j++){
                if(arr[i] == arr2[j]){
                    cout << arr[i] << " ";
                    break;
                }
            }
        }
        cout << "}";
     }
     else{
        cout << "You have entered out of bounds choice.\n" ;
        cin.ignore(1000,'\n');
     }
    return 0;
}