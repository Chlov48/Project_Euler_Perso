#include <iostream>
using namespace std;

long double facto(int n){
    long double x = 1;
    for(int i = n; i> 1;i--){
        x*=i;
    }
    return x;
}

long int pathInLattice(int n){
    return facto(n+n)/(facto(n)*facto(n));
}

int main()
{
    cout << pathInLattice(20) << endl;
    return 0;
}
