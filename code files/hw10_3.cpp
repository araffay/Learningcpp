#include <iostream>
using namespace std;

int main(){
    //this program outputs fibonacci numbers

    int N;
    int a1;
    int a2;
    int a3;

    cout << "Enter a number N :";
    cin >> N;

    if(N == 1){
        cout << "1";
    }
    else if(N == 2){
        cout << "1 , 1";
    }
    else if(N > 2){
        a1 = 1;
        a2 = 1;
        cout << "1,1";

        for(int i = 0; i < N-2; i++){
            a3 = a1+a2;
            cout << ", " << a3;

            a1 = a2;
            a2 = a3;

        }

    }








}
