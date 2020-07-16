#include <iostream>
#include <cmath>
using namespace std;
int main(){

            //second equation is S = vi*t+1/2*at^2


    //float S;
    //float a;
    //float vi;
    //float t;


            //cout << "Enter a :";
            //cin >> a;
            //cout << "Enter vi :";
            //cin >> vi;
            //cout << "Enter t :";
            //cin >> t;


            //S = (vi*t)+(a*t*t)/2;

            //cout << "Dude S is :";
            //cout << S;


        //second equation of motion is S = vit + at^2/2

        float t2;
        float S;
        float vi;
        float a;
        float t;
        int choice;

        //getting user choice

        cout << "Enter the choice you wanna find :" << endl;
        cout << "Enter 1 for S " << endl;
        cout << "Enter 2 for vi " << endl;
        cout << "Enter 3 for a" << endl;
        cout << "Enter 4 for t" << endl;
        cin >> choice;


        if(choice == 1){

                    //user has selected S
            cout << endl << "Enter a :";
            cin >> a;
            cout << "Enter vi :";
            cin >> vi;
            cout << "Enter t :";
            cin >> t;


            S = (vi*t) + ((a*t*t)/2);

            cout << endl << "So S is :" << S;

        }


        else if(choice == 2){

                //user has selected vi

            cout << endl << "Enter t :";
            cin >> t;
            cout << "Enter a :";
            cin >> a;
            cout << "Enter S :";
            cin >> S;


            vi = (S/t) - ((a*t)/2);

            cout << endl << "So vi is :" << vi;




        }

       else if (choice == 3){

                //user has selected a

            cout << endl << "Enter vi :";
            cin >> vi;
            cout << "Enter t :";
            cin >> t;
            cout << "Enter S :";
            cin >> S;


            a = ((2*S - vi)/t);

            cout << endl << "So a is :" << a;





       }


          else if (choice == 4){

                //user has selected t

               cout << endl << "Enter S :";
               cin >> S;
               cout << "Enter vi :";
               cin >> vi;
               cout << "Enter a :";
               cin >> a;

               t = (-vi/a) - sqrt(vi*vi+2*a*S)/a;
               t2 = (-vi/a) + sqrt(vi*vi+2*a*S)/a;

                if(t > 0){
                    cout << endl << "So t is :" << t;

                }

                else {
                    cout << endl << "t is IMPOSSIBLE";

                }

                if(t2 > 0){
                    cout << endl << "So t2 is :" << t2;
                }

                else{
                    cout << endl << "t is IMPOSSIBLE :";


                }



          }
        else{

            cout << "Chal nikal" << endl;
        }















}












