#include <iostream>
#include "array.cpp"
using namespace std;



// pointers = address
// int a = 5;
// what computer does:
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14... // this is memory address
// - - - - - - - - - 5 - - - ...
//
// program lies inside CPU
// program says int a = 5 (a, int "9" -> pointer)
// important = program does not store value inside cpu
// &a -> & gives us the location pointer of the array. &a = 9 -> pointer;
// *a -> gives us the value present on the pointer. *a = 5
// 0 1 2 3 4 5 6 7 8 9 10 11 12... // this is memory address
// - - - - - - - - - - - - ...
// int a[5] = {1,2,3,4,5}; stores 3 things -> {a; int*, "6" -> pointer}
// *a, *{a + 0}




int main(){
    // this program add or delete numbers in an array

    int N;
    int num;
    int flag = 0;
    int choice;
    //STEP 1: Input array
    cout << "This program add or delete numbers in an array" << endl;
    cout << "Input the Length of Array : ";
    cin >> N;

    int* arr = new int[N]; //int arr[N];

    cout << "Enter the numbers of Array :" << endl;

    for(int i = 0; i < N; i++){
       cin >> arr[i];
       //cout << " ";

    }

    //STEP 2: Add or delete numbers in array
    // while just runs forever
    // while(true) = kabhi jukhe na, kanhi ruke na (Kohinoor , DIVINE)

    while(true){
        cout << "The current array is: ";
        for(int i = 0; i < N; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Enter 1 to add number in a array" << endl;
        cout << "Enter 2 to delete number in a array" << endl;
        cin >> choice;

        if(choice == 1){ //add
            cout << "Enter the number you want to add: ";
            cin >> num;

            N = N + 1;
            int* new_arr = new int[N];
            for(int i = 0; i < N - 1; i++){
                new_arr[i] = arr[i];
            }
            new_arr[N - 1] = num;

            delete [] arr;
            int* arr = new int[N];
            for(int i = 0; i < N; i++){
                arr[i] = new_arr[i];


            }
            delete [] new_arr;

            cout << endl;
        }

        else if(choice == 2){ //delete
            if( N == 0){
                cout << "ERROR! This is an empty array" << endl;
            }
            else{
                N = N - 1;
                int*new_arr = new int [N];

                for(int i = 0; i < N; i++){
                    new_arr[i] = arr[i];
                }

                delete [] arr;

                int*arr = new int{N};

                for(int i = 0; i < N; i++){
                    arr[i] = new_arr[i];
                }
                delete [] new_arr;

                cout << endl;



            }




        }

        else{
            cout << "Enter a Valid number\n";
        }



    }


}
