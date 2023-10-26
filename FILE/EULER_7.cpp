#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
    for(int j =2; j <= sqrt(x)+1; j++){
        if(x%j==0){return false;}
    }return true;
}

int nPrime(int n){
    int max = 0;
    int x = 0;
    for(int i = 0; x <= n;i++){
        if(isPrime(i)){x++;}
        max = i;
    }return max;
}

int main()
{
    cout << nPrime(10001) << endl;
    return 0;
}
