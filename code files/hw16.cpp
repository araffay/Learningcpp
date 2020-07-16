#include <iostream>
using namespace std;

int main(){
    //
    int n; //number of number
    int N; //number of n multiples to be added
    int sum = 0;

    cout << "this program finds the sum of N multiples of n" << endl;
    cout << "Enter the number a and b : " << endl;
    cin >> N >> n;

    for(int i = 1; i <= N; i++){
        sum = sum + i*n;
    }


    cout << "The sum is " << sum << "\n";














}
