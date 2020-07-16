#include <iostream>
#include "prime.cpp"
using namespace std;


int main(){
    //this program finds the sum of N prime numbers
    int N;
    int sum = 0;
    int a = 1;
    int b = 2;

    cout << "Enter the number N : ";
    cin >> N;

    for(int i = 1; i<= N; i++){
        if(i == a){
        sum = sum + ith_prime(i);
        a = a + 2;
    }
        else if(i == b){
        sum = sum - ith_prime(i);
        b = b + 2;
    }




}
    cout << "The sum is " << sum << endl;

    //if( is_prime(N) ){
       // cout << " The Number is Prime " << endl;
    //}
   // else{
     //   cout << " The Number isn't Prime " << endl;
   // }
}



