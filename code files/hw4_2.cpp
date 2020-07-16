#include <iostream>
using namespace std;
int main(){

    //this program takes a value from user then asks for choice and then outputs the processed data
    float Tk;
    float Tc;
    float Tf;
    int choice;

    cout << "Enter 1 if you want to convert Tk to Tc" << endl;
    cout << "Enter 2 if you want to convert Tc to Tk" << endl;
    cout << "Enter 3 if you want to convert Tf to Tc" << endl;
    cout << "Enter 4 if you want to convert Tc to Tf" << endl;
    cout << "Enter 5 if you want to convert Tf to Tk" << endl;
    cout << "Enter 6 if you want to convert Tk to Tf" << endl;
    cin >> choice;

    if(choice == 1){
        //user has selected to convert T(K) to T(C)
        cout << endl << "Enter Tk :";
        cin >> Tk;

            Tc = Tk - 273;
        cout << endl << "So Tc is :" << Tc;
        }

    else if(choice == 2){
        //user has selected to convert Tc to Tk
        cout << endl << "Enter Tc :";
        cin >> Tc;

            Tk = Tc + 273;
        cout << endl << "So TK is :" << Tk;
    }

    else if(choice == 3){
        //user has selected to convert Tf to Tc
        cout << endl << "Enter Tf :";
        cin >> Tf;

            Tc = (Tf - 32)/1.8;
        cout << endl << "So Tc is :" << Tc;
    }
    else if (choice == 4){
        //user has selected to convert Tc to Tf
        cout << endl << "Enter Tc :";
        cin >> Tc;

            Tf = (1.8*Tc) + 32;

        cout << endl << "So Tf is :" << Tf;
    }

    else if (choice ==5){
        //user has selected to convert Tf to Tk
        cout << endl << "Enter Tf :";
        cin >> Tf;

            Tk = (Tf + 459.67)*(5.0/9.0);

        cout << endl << "So Tk is :" << Tk;
    }

    else if (choice == 6){
        //user has selected to convert Tk to Tf
        cout << endl << "Enter Tk :";
        cin >> Tk;

            Tf = (Tk/(5.0/9.0)) - 459.67;

        cout << endl << "So Tf is :" << Tf;
    }

    else{
        cout << endl << " Nikal Phoosay Pehli Fursat Mein Nikal!";
    }
}
