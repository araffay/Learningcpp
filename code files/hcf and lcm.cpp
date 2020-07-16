using namespace std;

int LCM(int, int);
int HCF(int, int);
int LCM3(int, int, int);

int LCM3(int a, int b, int c){
    int x = LCM(a,b);
    return LCM(x,c);
}


int LCM(int a, int b){

    int i;
    int lcm = 1;

    while(a != 1 || b != 1){
        for( i = 2; a%i != 0 && b%i != 0; i++ ){}
        if(a%i == 0){
            a = a/i;
        }
        if(b%i == 0){
            b = b/i;
        }
        lcm = lcm*i;

    }

    return lcm;
}

int HCF(int a, int b){

    int cuphead; // for storing remainder
    int mugman;  // for swap work

    //making sure that a is greater than b
    if(a < b){
        mugman = a;
        a = b;
        b = mugman;

    }
    //starting main work
    while(a%b != 0){

        cuphead = a%b;

        a = b;
        b = cuphead;

    }
    return b;




}
