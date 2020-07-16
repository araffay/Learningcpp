#include <iostream>
using namespace std;

int main(){
    //This program finds the Average of N numbers

    int N;
    float phus = 0;


    cout << "This program finds the Average of N numbers";
    cout << endl << "Enter N : ";
    cin >> N;

    float nums[N];
    cout << "Enter your numbers : " << endl;
    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }

    for(int i = 0; i < N; i++){
        phus = phus +nums[i];
    }

    phus = phus/N;

    cout << endl << "The average is : " << phus << endl;
}
