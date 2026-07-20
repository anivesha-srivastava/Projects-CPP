#include<iostream>
#include<vector>
using namespace std;

void linearSearch(vector<int> vec);
void reverse(vector<int>& vec);

int main(){
    //Same work using vetors
    vector<int> vec = {9,8,7,6,5,4,3,2,1,0};

    cout << "Performing two functions on array." << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Reverse an array" << endl;
    cout << "What do you wanna perform : ";
    int choice; cin >> choice;
    if(choice==1){
        linearSearch(vec);
    }
    else if(choice==2){
        reverse(vec);
        cout << "The updated vector becomes :" << endl;
        cout << "{ ";
        for(int value: vec){
            cout << value << " ";
        }
        cout << " }";
    }
    else{
        cout << "Stupid." << endl;
        cin.clear();
        cin.ignore(10,'\n');
    }
    return 0;
}

void linearSearch(vector<int> vector){
    cout << "Enter a number to search : ";
    int n; cin >> n;
    int size = vector.size();
    for(int i=0; i<size; i++){
        if(vector.at(i)==n){
            cout << "The value is present at " << i << " inside the vector." << endl;
            return;
        }
    }
    cout << "The number is not present inside the vector." << endl;
    return;
}
void reverse(vector<int>& vector){
    int start;
    int size = vector.size();
    for(int i=0; i<size/2; i++){
        start = vector[i];
        vector[i] = vector[size-1-i];
        vector[size-1-i] = start;
    }
}