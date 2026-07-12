# include <iostream>
using namespace std;

int asking();

int main() {
    // starting with patterns.
    // Around 16 from basic to intermediate ones
    int m;
    char choice;

    cout << endl;
    while (true) {
        cout << "1. Square pattern of Numbers." << endl;
        cout << "2. Square pattern of alphabets." << endl;
        cout << "3. Square pattern with no repetion of any number." << endl;
        cout << "4. Square pattern with no repetion of any alphabets." << endl;
        cout << "5. Triangle pattern using asterisks." << endl;
        cout << "6. Triangle pattern using numbers with no repetition." << endl;
        cout << "7. Triangle pattern using alphabets." << endl;
        cout << "8. Triangle pattern using numbers with repetition." << endl;
        cout << "9. Reverse triangle pattern using numbers with repetition." << endl;
        cout << "10. Reverse triangle patttern using alphabets with repetition." << endl;
        cout << "11. Floyd's triangle pattern using numbers." << endl;
        cout << "12. Floyd's triangle pattern in reverse order." << endl;
        cout << "13. Floyd's triangle pattern using alphabets." <<endl;
        cout << "14. Inverted triangle pattern using numbers with repetition." << endl;
        cout << "15. Inverted triangle pattern using alphabets with repetition." << endl;
        cout << "16. Pyramid pattern using numbers." << endl;
        cout << "17. Pyramid pattern using alphabets." << endl;
        cout << "18. Hollow Diamond pattern using asterisks." << endl;
        cout << "19. Butterfly pattern using asterisks." << endl;

        cout << endl;
        cout << "Which pattern do you want to get printed: ";
        if (!(cin >> m)) {
            cout << "Invalid input. Please enter a number.\n\n";

            cin.clear();              // Clear the error state
            cin.ignore(10000, '\n');  // Discard the invalid input

            continue;
        }

        if( m<1 || m>19 ){
            cout << "You have entered an invalid number." <<endl;
            cout << "RESTART\n\n" << endl;
            continue;
        }

        int n = asking();
        cout << endl;
        if (m == 1) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j < n; j++) {
                    cout << j << ' ';
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (m == 2) {
            if (n > 26) {
                cout << "You have entered a number greater than 26, so only till Z will print.\n " << endl;
                for (int i = 0; i < n; i++) {
                    char ch = 'A';
                    for (int j = 0; j < n && ch <= 90; j++) {
                        cout << ch << ' ';
                        ch++;
                        
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = 0; i < n; i++) {
                    char ch = 'A';
                    for (int j = 0; j < n; j++) {
                        if (ch <= 132) {
                            cout << ch << ' ';
                            ch++;
                        }
                    }
                    cout << endl;
                }
            }
            cout << endl;
        }
        else if(m==3){
            int num=1;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout << num << ' ';
                    num++;
                }
                cout<<endl;
            }
            
        }
        else if(m==4){
            if (n > 26) {
                cout << "You have entered a number greater than 26, so only till Z will print.\n " << endl;
            }
            char ch = 'A';
                for (int i = 0; i < n && ch <= 90; i++) {
                    for (int j = 0; j < n && ch <= 90; j++) {
                        cout << ch << ' ';
                        ch++;
                        
                    }
                    cout << endl;
                }
        }
        else if(m==5){
            for(int i=0; i<n; i++){
                for(int j=0; j<i+1; j++){
                    cout << '*' << ' ';
                }
                cout << endl;
            }
        }
        else if(m==6){
            for(int i=0; i<n; i++){
                for(int j=0; j<i+1; j++){
                    cout << (i+1) << ' ';
                }
                cout << endl;
            }
        }
        else if(m==7){
            char ch='A';
            if(n>26){
                cout << "You have entered a number more than 26, so not gonna print after Z.\n" << endl;
            }
            for(int i=0; i<n && ch<=90; i++){
                for(int j=0; j<i+1 && ch<=90; j++){
                    cout << ch << ' ';
                }
                ch++;
                cout << endl;
            }
        }
        else if(m==8){
            for(int i=0; i<n; i++){
                for(int j=1; j<=i+1; j++){
                    cout << j << ' ';
                }
                cout << endl;
            }
        }
        else if(m==9){
            for(int i=0; i<n; i++){
                for(int j=i+1; j>0; j--){
                    cout << j << ' ';
                }
                cout << endl;
            }
        }
        else if(m==10){
            int ch='A';
            cout << "Only print till Z.\n" << endl;
            for(int i=0; i<n && ch<=90; i++){
                int ch2=ch;
                for(int j=i+1; j>0 && ch<=90; j--){
                    cout << char(ch2) << ' ';
                    ch2--;
                }
                ch++;
                cout << endl;
            }
        }
        else if(m==11){
            int num=1;
            for(int i=0; i<n; i++){
                for(int j=0; j<i+1; j++){
                    cout << num << ' ';
                    num++;
                }
                cout << endl;
            }
        }
        else if(m==12){
            int num1=1;
            for(int i=0; i<n; i++){
                int num2=num1;
                for(int j=0; j<i+1; j++){
                    cout << num2 << ' ';
                    num2--;
                }
                num1 +=i+2;
                cout << endl;
            }
        }
        else if(m==13){
            int ch='A';
            for(int i=0; i<n && ch<=90; i++){
                for(int j=0; j<i+1 && ch<=90; j++){
                    cout << char(ch) << ' ';
                    ch++;
                }
                cout << endl;
            }
        }
        else if(m==14){
            for(int i=0; i<n; i++){
                for(int j=0; j<i; j++){
                    cout << ' ';
                }
                for(int k=n-i; k>0; k--){
                    cout << (i+1);
                }
                cout << endl;
            }
        }
        else if(m==15){
            int ch='A';
            cout << "Only print till Z.\n\n";
            for(int i=0; i<n && ch<=90; i++){
                for(int j=0; j<i; j++){
                    cout << ' ';
                }
                for(int k=n-i; k>0; k--){
                    cout << char(ch);
                }
                ch++;
                cout << endl;
            }
        }
        else if(m==16){
            for(int i=0; i<n; i++){
                for(int j=n-1-i; j>0; j--){
                    cout << ' ';
                }
                for(int k=0; k<i+1; k++){
                    cout << (k+1);
                }
                for(int l=i; l>0; l--){
                    cout << l ;
                }
                cout << endl;
            }
        }
        else if(m==17){
            for(int i=0; i<n; i++){
                int ch='A';
                for(int j=n-1-i; j>0; j--){
                    cout << ' ';
                }
                for(int k=0; k<i+1; k++){
                    cout << char(ch);
                    ++ch;
                }
                ch=ch-2;
                for(int l=i; l>0; l--){
                    cout << char(ch) ;
                    ch--;
                }
                cout << endl;
            }
        }
        else if(m==18){
            for(int i=0; i<n; i++){
                for(int j=n-i; j>1; j--){
                    cout << ' ';
                }
                cout << '*';
                if(i!=0){
                    for(int k=0; k<((2*i)-1); k++){
                        cout << ' ';
                    }
                    cout << '*';
                }
                cout << endl;
            }
            for(int i=0; i<n-1; i++){
                for(int j=0; j<i+1; j++){
                    cout << ' ';
                }
                cout << '*';
                if(i!=n-2){
                    for(int k=2*(n-i)-5; k>0; k--){
                        cout << ' ';
                    }
                    cout << '*';
                }
                cout << endl;
            }
        }else if(m==19){
            for(int i=0; i<n; i++){
                for(int j=0; j<i+1; j++){
                    cout << '*' << ' ';
                }
                int spaces = (2*n)-(i+1)*2;
                for(int k=0; k<spaces; k++){
                    cout << "  ";
                }
                for(int j=0; j<i+1; j++){
                    cout << '*' << ' ';
                }
                cout << endl;
                
            }
            for(int i=0; i<n; i++){
                for(int j=n-i; j>0; j--){
                    cout << '*' << ' ';
                }
                int spaces = 2*(i);
                for(int k=0; k<spaces; k++){
                    cout << "  ";
                }
                for(int j=n-i; j>0; j--){
                    cout << '*' << ' ';
                }
                cout << endl;
            }
        }

        cout << endl;
        cout << "Want to print more pattern ? (y/n): ";
        cin >> choice;
        if (choice == 'n') {
            cout << endl;
            break;
        }
    }
    return 0;
}

int asking() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}