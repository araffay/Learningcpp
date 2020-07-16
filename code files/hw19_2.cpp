#include <iostream>
using namespace std;

int main(){
    // This program finds the minimum number of Given Array

    int N;
    float A[N];
    float minimum;

    cout << " This program finds the minimum number of Given Array" << endl;
    cout << " Input the Length of Array : ";
    cin >> N;




    cout << " Enter the numbers of Array : " << endl;

    for(int i = 0; i < N; i++){
        cout << " ";
        cin >> A[i];
    }



    minimum = A[0];

    for(int i = 1; i < N; i++){
        if( minimum > A[i] ){
            minimum = A[i];
        }

    }

    cout << "The minimum number is " << minimum << endl;





}
