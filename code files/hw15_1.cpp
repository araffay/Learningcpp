#include <iostream>
#include "prime.cpp"
using namespace std;

int main(){

    int N;
    int a = 2;
    int sum = 0;

    cout << "Enter the number N : ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        if(i%a == 1){
            sum = sum + ith_prime(i);

        }
        else if(i%a == 0){
            sum = sum - ith_prime(i);
        }

    }


    cout << "The answer is : " << sum << endl;




}
