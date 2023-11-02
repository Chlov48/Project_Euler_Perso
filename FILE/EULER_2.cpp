#include <iostream>
using namespace std;

int fibonacciIter(int n) {
    long int u0 = 1;
    long int u1 = 1;
    long int ux = 0;
    for(long int i = 2; i <= n; i++){
        ux = u0+ u1;
        u0 = u1;
        u1 = ux;
    }
    if (n <= 1){
        return 1;
    }
    return ux;
}

int sumFibonacciEven (int n){
    int x=0;
    for(int i=1; fibonacciIter(i)<=n;i++){
        if(fibonacciIter(i)%2==0){
            x+=fibonacciIter(i);
        }
    }
    return x;
}



int main()
{
    cout << sumFibonacciEven(4000000) << endl;
    return 0;
}


