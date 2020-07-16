#include <iostream>
using namespace std;

// declaring functions
int max_(int* arr, int N);
int min_(int * arr, int N);
bool is_element_(int* arr,int N, int ele);
int search_(int* arr,int N, int ele);
int* add_(int* arr, int N, int num);
int* remove_(int* arr, int N);


int max_(int* arr, int N){
    int maximum;
    maximum = arr[0];
    for(int i = 1; i < N; i++){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }
    return maximum;

}


int min_(int* arr, int N){
    int minimum;
    minimum = arr[0];
    for(int i = 1; i < N; i++){
        if(minimum > arr[i]){
            minimum = arr[i];
        }
    }
    return minimum;

}



bool is_element_(int* arr,int N, int ele){

        for(int i = 0; i < N; i++){
            if( ele == arr[i]){

                return true;
            }

        }


        return false;


    }

int search_(int* arr,int N, int ele){

        for(int i = 0; i < N; i++){
            if( ele == arr[i]){
                return i;

            }

        }


        return -1;


    }


















