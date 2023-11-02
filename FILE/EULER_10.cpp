#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
    for(int i = 2; i <= sqrt(x)+1; i++){
        if((x%i ==0)&&(x!=2)){
            return false;
        }
    }return true;
}

long int sumOfPrime(int n){
    long int x;
    x=0;
    for(int i = 2;i<n;i++){
        if(isPrime(i)){
             x+= i;
        }
    }
    return x;
}

int main()
{
    cout << sumOfPrime(2000000) << endl;
    return 0;
}
