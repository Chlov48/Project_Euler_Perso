#include <iostream>
using namespace std;

int colatzSerie(int n){
    int x = 1;
    for(int i = 1; n!= 1;i++){
        if(n%2==0){
            n=n/2;
        }else{
            n=3*n+1;
        }
        x=i;
    }
    return x;
}

int longestUnderN(int n){
    int x =1;
    int x2 = 1;
    int d = 1;
    for(int i =1;i<n;i++){
        d=colatzSerie(i);
        if(d>x){
            x=d;
            x2=i;
        }
    }
    return x2;
}

int main()
{
    cout << longestUnderN(1000000) << endl;
    return 0;
}
