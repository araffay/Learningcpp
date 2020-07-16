#include <iostream>
using namespace std;

int main(){
    //this program finds the maximum number of given ARRAY

    int N;
    float A[N];
    float maximum;

    cout << " This program finds the maximum number of given ARRAY" << endl;
    cout << " Enter the Length of Array : ";
    cin >> N;

    cout << endl;

    cout << " Enter the array numbers : " << endl;
    for(int i = 0; i < N; i++){
        cout << " ";
        cin >> A[i];
    }


    maximum = A[0];
    for(int i = 1; i < N; i++){
        if( maximum < A[i] ){
            maximum = A[i];
        }
    }

    cout << "The Maximum is " << maximum << endl;











}
