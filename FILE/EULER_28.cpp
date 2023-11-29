#include <iostream>
using namespace std;

int sumOfSpiral(int lim){
    int x = 1;
    int sum = 1;
    for(int i = 2; i < lim; i+=2){
        for(int j = 0; j <4; j++){
            x += i;
            sum += x;
        }
    }return sum;
}

int main()
{
    cout << sumOfSpiral(1001) << endl;
    return 0;
}
