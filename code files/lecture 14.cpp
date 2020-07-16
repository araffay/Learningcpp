#include <iostream>
using namespace std;

int main(){
    // this program finds the maximum number in a array

    int N;
    int arr[N];
    int maximum;
    //STEP 1: Input array
    cout << "This program finds the maximum number in a array" << endl;
    cout << "Input the Length of array : ";
    cin >> N;


    cout << "Enter the array numbers : " << endl;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    // STEP 2 : finding the maximum
    maximum = arr[0];
    for(int i = 1; i < N; i++){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }

    cout << "Maximum Value is " << maximum << endl;





}









