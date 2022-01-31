#include <iostream>
#include <assert.h>
#include <math.h>
using namespace std;


bool isPrime(int num) {
    // //num = num < 0 ? num * -1 : num;
    // if(num <= 0)
    //     return false;
    // if (num != 2 && num % 2 == 0)
    //     return false;

    // const unsigned long int MAX = num * 2;
    // unsigned long int sieve[MAX];
    // unsigned long int index = 2;
 
    // for(unsigned long int i = 0; i < MAX; i++)
    //     sieve[i] = 0;

    // sieve[0] = true;
    // sieve[1] = true;
    // for(unsigned long int i = index; i < MAX; i++) {
    //     for(unsigned long int j = i * 2; j < MAX; j = j + i) {
    //         sieve[j] = true;       
    //     }
    // }

    // return !sieve[num];


        if(num <= 1)
        return false;

    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}


int main() {
    assert(isPrime(-20) == false);  /* false */
    assert(isPrime(2) == true );  /* true  */
    assert(isPrime(-1) == false);/* false */
}