using namespace std;

bool is_prime(int ); // bool has 2 possible values: true or false.
int ith_prime(int ); //declaration of function

int ith_prime(int i){
    // this function finds the ith prime.
    // i is the required number of prime.
    int j = 2;
    int Np = 0; //number of primes.
    if (i < 1){
        return -1; //just a farig condition
    }
    else{
        while(i > Np){
            if(is_prime(j)){
                Np = Np + 1; //found a prime.
            }
            j = j + 1;
        }
        return j-1;
    }
}

bool is_prime(int p){
    int flag = 0;

    if(p > 1){
        if(p == 2){
            return true;
        }
        else{
            for(int i = 2; i < p; i++){
                if(p%i == 0){
                    flag = 1;
                    //check if a number is divisible
                    return false;
                    break;
                }
            }

            if(flag == 0){
                return true;
            }
        }
    }
    else{
        return false;
    }
}
