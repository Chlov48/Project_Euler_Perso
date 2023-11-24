#include <iostream>
using namespace std;

int sumOfMultiple(int lim){
    int x;
    for (int i=0; i<= lim; i++){
        if ((i%5==0)||(i%3==0)){
            x+=i;
        }
    }return x;
}

int main()
{
    cout << sumOfMultiple(10) << endl;
    cout << sumOfMultiple(49) << endl;
    cout << sumOfMultiple(1000) << endl;
    cout << sumOfMultiple(8456) << endl;
    cout << sumOfMultiple(19564) << endl;

    return 0;
}
