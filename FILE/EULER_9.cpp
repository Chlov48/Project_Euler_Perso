#include <iostream>
#include <cmath>
using namespace std;

void triplet(int n) {
    int a,b,c;
    float cSquared;
    for (int i = 1;i<=n;i++){
        a = i*i;
        for(int j = i; j<=n; j++){
            b=j*j;
            c=b+a;
            cSquared = sqrt(c);
            if((int)cSquared * (int)cSquared == c){
                if(i+j+(int)cSquared == n){
                    cout << i*j*(int)cSquared << endl;
                }
            }
        }
    }
}

int main()
{
    triplet(1000);
    return 0;
}
