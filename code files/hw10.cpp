#include <iostream>
using namespace std;

int main(){
    //this program outputs Factorials
    int N;
    int i;
    int factorial = 1;

    cout << "Enter the Desired Number :";
    cout << " ";
    cin >> N;

    if(N == 0){
        cout << "Factorial of " << N << " is 1";
    }

    for(i = 1; i <= N; i++){
        factorial = factorial*i;

    }

    cout << "Factorial is :" << " " << factorial;
}
