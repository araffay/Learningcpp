#include <iostream>
using namespace std;

int main(){
    // this program finds if a number is prime or not.
    int p;
    int flag = 0;

    cout << "Enter a number: ";
    cin >> p;

    if(p > 1){
        if(p == 2){
            cout << "It is a prime number" << endl;
        }
        else{
            for(int i = 2; i < p; i++){
                if(p%i == 0){
                    flag = 1;
                    //check if a number is divisible
                    cout << "It is NOT a prime number" << endl;
                    break;
                }
            }

            if(flag == 0){
                cout << "It is a prime number" << endl;
            }
        }
    }
    else{
        cout << "It is NOT a prime number." << endl;
    }
}
