#include <iostream>
using namespace std;

int main(){
    // this program searches a number in an array

    int N;
    int num;
    int flag = 0;
    //STEP 1: Input array
    cout << " This program searches a number in an array" << endl;
    cout << " Input the Length of Array : ";
    cin >> N;

    int arr[N];

    cout << " Enter the numbers of Array : " << endl;

    for(int i = 0; i < N; i++){
        cout << " ";
        cin >> arr[i];
    }

    //STEP 2: Search for the number in array
    //while just runs the program forever

    while(true){
        cout << "Enter the number you want to search: ";
        cin >> num;

        flag = 0;

        for(int i = 0; i < N; i++){
            if( num == arr[i]){
                cout << "Yes, this number exists!" << endl;
                flag = 1;
                cout << endl;
                break;

            }

      }

        if(flag == 0){
            cout << "Number not found!" << endl;
            cout << endl;
        }

    }






























}
