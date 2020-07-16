#include <iostream>
using namespace std;

int main(){

    //this program finds the sum of first N numbers
    int N;
    int i = 3;
    int flag = 0;
    int sum = 0;
    int Np;

    cout << "Enter the value of N :";
    cin >> N;

    if(N < 1){
        cout << "Invalid Input" << endl;
    }
    else if(N == 1){
        sum = sum + 2;
        cout << "Sum is " << sum;
    }
    else{
        sum = sum + 2;
        Np = 1;
        while(Np < N){
            for(int j = 2; j < i; j++ ){
                if(i%j == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                sum = sum + i;
                Np = Np + 1;
            }
            i = i + 2;
            flag = 0;

        }
        cout << "Sum is " << sum << endl;
    }

}
