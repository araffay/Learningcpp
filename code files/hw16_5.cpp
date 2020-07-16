#include <iostream>
using namespace std;

int main(){
    //this program is for FACTORIALS

    int N;
    int factorial = 1;

    cout << "Enter the number : ";
    cin >> N;

    if(N == 0){
        cout << "Factorial of 0 is 1" << endl;
    }

    for(int i = 1; i <= N; i++){
        factorial = factorial*i;
    }

    cout << "Factorial of " << N << " is " << factorial << endl;

    return 0;






}
