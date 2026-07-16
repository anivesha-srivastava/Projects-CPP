# include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int size);
void reverse(int arr[],int size);

int main(){
    cout << "Performing two functions on array." << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Reverse an array" << endl;
     int arr[]={1,2,3,4,5,6,7,8,9,0,11,44,88,65,74,87,93,28,34,59,18,50,83,89,90,33};
     int size = (sizeof(arr)/sizeof(int));
    while(true){
        cout <<"Which one do you wanna try ?  : ";
        int n; cin >> n;

        if(n==1){
            cout << "Which element do you want to try to search in the array : ";
            int search; cin >> search;
            cout << "The element is at " << linearSearch(arr,search,size) << "." << endl;
        }
        else if(n==2){
            reverse(arr,size);
            cout << "{";
            for(int i=0; i<size-1; i++){
                cout << arr[i] << "," ;
            }
            cout << arr[size-1]; 
            cout << "}" <<endl;
        }
        else{
            cout << "Stupid who don't even know how to choose an option correctly, well that is just an definition , oh yeah you wrote an invalid option." << endl;
            cin.clear();              
            cin.ignore(10000, '\n');
        }
        cout <<"Do you want to continue ? (y/n): ";
        char choice; cin >> choice;
        if(choice=='n'){
            break;
        }
        cin.clear();              
        cin.ignore(10000, '\n');
    }
    return 0;
}


int linearSearch(int arr[],int n, int size){
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            return i;
        }
    }
    return 
    -1;
}
void reverse(int arr[],int size){
    int extra = 0;
    for(int i=0; i<size/2; i++){
        extra = arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=extra;
    }
}