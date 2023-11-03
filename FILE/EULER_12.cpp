#include <iostream>
using namespace std;

int nTriangle(int n){
    int x = 0;
    for(int i=1;i<=n;i++){
        x+=i;
    }
    return x;
}

int nFactor(int n){
    int x =0;
    for(int i=1; i<=n; i++){
        if(i*(int)(n/i)==n){
            x++;
        }
    }
    return x;
}

int firstTriangleWOverNDivisor(int n){
    for(int i=1;1==1;i++){
        if(nFactor(nTriangle(i))>=n){
            return nTriangle(i);
        }
    }
    return 0;
}

int main()
{
    cout << firstTriangleWOverNDivisor(167) << endl;
    return 0;
}
