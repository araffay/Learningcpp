using namespace std;

int max_(int* arr);
int min_(int * arr);
bool is_element_(int * arr, int ele);
int search_(int* arr, int ele);
int* add_();
int* remove_(int* arr);


int max_(int* arr){
    int maximum;
    maximum = arr[0];
    for(int i = 1; i < N; i++){
        if(maximum > arr[i]){
            maximum = arr[i];
        }
    }
    return maximum;

}


int min_(int* arr){
    int minimum;
    minimum = arr[0];
    for(int i = 1; i < N; i++){
        if(minimum < arr[i]){
            minimum = arr[i];
        }
    }
    return minimum;

}



bool is_element_(int* arr, int ele){
    int flag = 0;

        for(int i = 0; i < N; i++){
            if( ele == arr[i]){
                return true;
                flag = 1;
                break;

            }

      }

        if(flag == 0){
            return false;
        }

    }




















