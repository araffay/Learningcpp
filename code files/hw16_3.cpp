#include <iostream>
using namespace std;

int main(){
    //this program outputs the factors

    int a;

    cout << "This Program Outputs the Factors" << endl;
    cout << "Enter the Number : ";
    cin >> a;


    for(int i = 1; i<= a; ++i){
        if( a%i == 0){
            cout << " " << i << " ";
        }
    }

}
