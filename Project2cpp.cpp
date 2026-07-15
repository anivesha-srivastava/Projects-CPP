#include <iostream>
using namespace std;

int sumDigits(int num);
int factorial(int n);
int prime(int n);
int choice();

int main(){
    cout << "Making some functions:" << endl;
    cout << "1. Sum of the last digits of a number." << endl;
    cout << "2. Binomial." << endl;
    cout << "3. Print all prime numbers from 2 to N." << endl;
    cout << "4. Print nth fibonacci." << endl;

    while(true){
        cout<<endl;
        int cho=choice();
        cout << endl;
        if(cho==1){
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << "The sum of last digits : " << sumDigits(n) << endl;
        }
        else if(cho==2){
            int n,r;
            cout << "Enter n: ";
            cin >> n;
            cout << "Enter r: ";
            cin >> r;

            int fac_n = factorial(n);
            int fac_r = factorial(r);
            int fac_n_r = factorial(n-r);

            cout << "Binomial : " << (fac_n/(fac_r * fac_n_r)) <<endl;
        }
        else if(cho==3){
            int n;
            cout << "Enter a number: ";
            cin >> n;
            int sum = 0;
            for(int i=0; i<=n; i++){
                sum +=prime(i);
            }

            cout << "The sum of the prime number till nth term : " << sum << endl;
        }
        else if(cho==4){
            int firstNumber = 0;
            int secondNumber = 1;
            int sum;
            cout << "Enter the nth term : ";
            int n; cin>> n;

            if(n==0 || n<0){
                cout << "The term : " << firstNumber << endl;
            }
            else if(n==1){
                cout << "The term : " << secondNumber << endl;
            }
            else {
                for(int i=1; i<n; i++){
                    sum= firstNumber+secondNumber;
                    firstNumber=secondNumber;
                    secondNumber=sum;
                }

                cout << "The term : " << sum;
            }
        }
        else{
            cout << "You have entered an invalid number. " <<endl;
        }

        cout << endl;
        cout << "Do you want to continue (y/n): ";
        char ch;cin >> ch;
        if(ch=='n'){
            cout << "Stoping it..." << endl;
            cout << "Thank you " << endl;
            break;
        }
    }
    return 0;
}
int sumDigits(int num){
    int sum=0;
    while (num>0){
        int lastDigit = num%10;
        num /= 10;
        sum += lastDigit;
    }
    return sum;
}
int factorial(int n){
    int fac = 1;
    while(n>1){
        fac *=n;
        n--;
    }
    return fac;
}
int choice(){
    int choice;
    cout << "Enter which one wanna try: ";
    cin >> choice;
    return choice;
}
int prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return n;
}