#include <iostream>
using namespace std;
int main(){
    // this program add or delete numbers in an array

    int N;
    int num;
    int flag = 0;
    int choice;

    cout << "This program add or delete numbers in an array" << endl;
    cout << "Input the Length of Array : ";
    cin >> N;

    int* arr = new int[N];

    cout << "Enter the numbers of Array :" << endl;

    for(int i = 0; i < N; i++){
       cin >> arr[i];


    }

    while(true){
        cout << "The current array is: ";
        for(int i = 0; i < N; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Enter 1 to add number in a array" << endl;
        cout << "Enter 2 to delete number in a array" << endl;
        cin >> choice;

        if(choice == 1){
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

        else if(choice == 2){
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
