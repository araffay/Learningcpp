#include <iostream>
#include "robot.cpp"
#include <string.h>
using namespace std;

int main(){
    // Evil PROGRAM; 0.1
    // this program fools asfand
    // step 1: you write your name
    // step 2: you write your crush name
    // step 3: kalabaziyan (processing... ...)
    // step 4: answer depending on set

    char name1[25];
    char name2[25];
    char crush2[25];
    char crush1[25];

    //Introduction
    cout << "This Program Checks The Whole Universe and Finds";
    cout << " the Mysterious Answers to Your Fate." << endl;
    cout << "We will Tell you Your Compatibility With Your CRUSH";

    cout << endl;
    cout << endl;

    //step 1
    cout << "ENTER YOUR HOLY NAME  " << endl;
    cout << "Enter the First Character : ";
    cin >> name1;

    cin.clear();//farig the extra characters

    cout << "Enter the Second Character : ";
    cin >> name2;

    cin.clear();

    cout << endl;
    cout << endl;

    //step 2
    cout << "ENTER YOUR CRUSH NAME  " << endl;
    cout << "Enter the First Character : ";
    cin >> crush1;

    cin.clear();//farig the extra characters

    cout << "Enter the Second Character : ";
    cin >> crush2;

    cin.clear();

    cout << endl;

    //step 3;
    doanimation();
    //cout << name1 << name2 << crush1 << crush2 << endl;



    //cout << strcmp(name1 , "abdul") << endl;
    //cout << strcmp(name2 , "raffay") << endl;
    //cout << strcmp(crush1 , "ayesha") << endl;
    //cout << strcmp(crush2 , "siddiqa") << endl;






    if(strcmp(name1 , "abdul") == 0 && strcmp(name2 , "raffay") == 0
       && strcmp(crush1 , "ayesha") == 0 && strcmp(crush2 , "siddiqa") == 0){


        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "             CONGRATULATION!                                         " << endl;
        cout << "                YOU GUYS                                              " << endl;
        cout << "              ARE READY TO                                               " << endl;
        cout << "                   GO!                                       " << endl;
        cout << "                                                      " << endl;
        cout << "                                                      " << endl;

}


    else{

        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "                YOU GUYS                                              " << endl;
        cout << "              ARE READY TO                                               " << endl;
        cout << "                   GO!                                       " << endl;
        cout << "                                                      " << endl;
        cout << "                                                      " << endl;


    }












}
