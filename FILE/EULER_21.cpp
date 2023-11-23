#include <iostream>
#include<cmath>
using namespace std;

int sumOfDiv(int n){
    int x = 1;
    for(int i = 2; i < (int)sqrt(n)+1; i++){
        if(n%i == 0){
            x+= i;
            x+= n/i;
        }
    }
    return x;
}

bool isAmical(int n){
    int x = sumOfDiv(n);
    if(n == sumOfDiv(x) && x != n){return true;}
    return false;
}

int sumOfAm(int lim){
    int x = 0;
    for(int i = 0; i < lim; i++){
        if(isAmical(i)){x+= i;}
    }
    return x;
}

int main()
{
    cout << sumOfAm(10000) << endl;
    return 0;
}
