#include <iostream>
using namespace  std;

int main(){
    //this program outputs the sum of previous numbers
    int N;
    int Sum = 0;

    cout << "Enter a number N : ";
    cin >> N;

    for(int i = 0; i <= N; i++){

        Sum = Sum + i;

    }

    cout << "Sum is : " << Sum;









}
