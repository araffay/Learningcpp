#include <iostream>
using namespace std;

int main(){
    //this program inputs the marks of user and then outputs the Grade
    float N;

    cout << "Enter You Marks Out of 100 : ";
    cin >> N;


    if( N == 100){
        cout << "Congratulation! You got the PERFECT Score ";
    }
    else if( N >= 90.0 && N <= 100.0 ){
        cout << "Congratulation! You got A ";
    }
    else if( N >= 80.0 && N < 90.0 ){
        cout << " You got B grade Kiddo! ";
    }
    else if( N >= 70.0 && N < 80.0 ){
        cout << " You Got C Grade ";
    }
    else if( N >= 60.0 && N < 70.0 ){
        cout << " You got C Grade ";
    }
    else if( N >= 0.0 && N < 60.0 ){
        cout << " You got F grade ";
    }

    else{
        cout << " Enter Valid Information! ";
    }






}
