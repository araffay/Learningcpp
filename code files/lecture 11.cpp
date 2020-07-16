#include <iostream>
#include "testing.cpp"
using namespace std;

int main(){
    //this program just tells us about arrays
    int N = 1;
    char A = 'a';
    float B = 2.0;
    bool C = false;

    int NArr[5] = {1,2,3,4,5};
    char AArr[5] = { 'q' , 'w' , 'e' , 't' };
    float BArr[5] = {2.0,3.0,3.0,9.9,3.3};
    bool CArr[5] = {true , false , false , true , false};

    cout << "The first entry of NArr is : " << NArr[0] << "\n";
    cout << "The second entry of NArr is : " << NArr[1] << endl;
    cout << "The third entry of NArr is : " << NArr[2] << endl;
    cout << "The fourth entry of NArr is : " << NArr[3] << endl;
    cout << "The fifth entry of NArr is : " << NArr[4] << endl;


    cout << "The first entry of CArr is : " << CArr[0] << "\n";
    cout << "The second entry of CArr is : " << CArr[1] << endl;
    cout << "The third entry of CArr is : " << CArr[2] << endl;
    cout << "The fourth entry of CArr is : " << CArr[3] << endl;
    cout << "The fifth entry of CArr is : " << CArr[4] << endl;

    for(int i = 0; i < sizeof(NArr)/sizeof(NArr[0]); i++){
        cout << "The " << i + 1 << " entry of AArr is " << AArr[i] << endl;
    }


    for(int i = 0; i <  sizeof(NArr)/sizeof(NArr[0]); i++){
        cin >> NArr[i];
    }

    for(int i = 0; i <  sizeof(NArr)/sizeof(NArr[0]); i++){
        cout << "The " << i + 1 << " entry of NArr is " << NArr[i] << endl;
    }



    test(NArr , 5);

}
