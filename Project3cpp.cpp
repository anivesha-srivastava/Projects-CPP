# include <iostream>
#include "Headers/conversion.h"
using namespace std;
int main(){
    int choice;
    cout << endl;
    cout << "The system of binary to decimal and decimal to binary conversion." << endl;
    cout << "1. Binary to decimal." << endl;
    cout << "2. Decimal to Binary." << endl;
    cout << endl;
    cout << "Enter your choice of coversion : " ;
    cin >> choice;

    if(choice==1){
        cout << "Enter a binary number :";
        int dec; cin >> dec;
        cout << "The decimal of " << dec << " is " << decimal(dec) << '.';
    }
    else if(choice==2){
        cout << "Enter a decimal Number :";
        int bi; cin >> bi;
        cout << "The binary of " << bi << " is " << binary(bi) << '.';
    }
    else{
        cout << endl;
        cout << "Invalid choice." << endl;
    }
    return 0;
}
