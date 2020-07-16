#include <iostream>
using namespace std;

int main(){
    //this program is all about arrays
    int Iarray[5] = {1, 2, 3, 4, 5};
    float Farray[5] = {1.0 , 2.0 , 3.0 , 4.0 , 5.0};
    bool Barray[5] = {false , true , false , false , true};
    char Carray[5] = { 'a' , 'b' , 'c' , ' ' , 'd' };

    cout << "The first entry of Carray is : " << Carray[0] << endl;
    cout << "The second entry of Carray is : " << Carray[1] << endl;
    cout << "The third entry of Carray is : " << Carray[2] << endl;
    cout << "The fourth entry of Carray is : " << Carray[3] << endl;
    cout << "The fifth entry of Carray is : " << Carray[4] << endl;

    cout << endl;

    cout << "The first entry of Farray is : " << Farray[0] << endl;
    cout << "The second entry of Farray is : " << Farray[1] << endl;
    cout << "The third entry of Farray is : " << Farray[2] << endl;
    cout << "The fourth entry of Farray is : " << Farray[3] << endl;
    cout << "The fifth entry of Farray is : " << Farray[4] << endl;


    for(int i = 0; i < sizeof(Iarray)/sizeof(Iarray[0]); i++){

    }





}
