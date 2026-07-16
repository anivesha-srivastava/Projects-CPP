# include<iostream>
using namespace std;

int main(){
    cout << "1.Reverse function.\n";
    cout << "2.Checking whether a number is a two to power number or not using loops.\n";
    cout << "3.Checking whether a number is a two to power number or not using bits.\n";

    while (true){
        cout << "Which one do you wanna try : ";
        int choice; cin >> choice;
        if(choice==1){
            cout << "Enter a number : ";
            int num; cin >> num;
            int rev=0;
            while(num>0){
                int digit = num%10;
                rev =rev*10+digit;
                num = num/10;
            }
            cout << "Your number becomes " << rev << ".\n";
        }
        else if(choice==2){
            cout << "Enter a number : ";
            unsigned int num; cin >> num;
            bool Good =true;
            while(true && num >1){
                if(num%2!=0){
                    Good = false;
                    cout << "The number is not a power of 2.\n";
                    break;
                }
                num=num/2;
            }
            if(Good==true){
                cout << "The number is a power of 2.\n";
            }
        }
        else if(choice==3){
            cout << "For potive only.\n";
            cout << "Enter a number : ";
            unsigned int num; cin >> num;
            int num2 = num-1;
            if((num & num2) == 0){
                cout << "The number is a power of 2.\n";
            }
            else{
                cout << "The number is not a power of 2.\n";
            }
        }
        else{
            cout << "Invalid choice.\n";
            cin.clear();
            cin.ignore(100,'\n');
        }
        cout << "Want to continue (y/n): ";
        char n; cin >> n;
        if(n=='n'){
            break;
        }
        cin.clear();
        cin.ignore(1000,'\n');
    }
    return 0;
}