#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long int x){
    for(int i =2; i <= sqrt(x)+1; i++){
        if(x%i==0){return false;}
    }return true;
}

long int largestPrimeFactor(long int x){
    int max;
    for(int i =1; i <= x; i++){
        if(x%i==0){
            if(isPrime(i)){
                max = i;
            }
            
        }
    }return max;
}

int main()
{
    cout << largestPrimeFactor(8) << endl;
    cout << largestPrimeFactor(13195) << endl;
    return 0;
}
