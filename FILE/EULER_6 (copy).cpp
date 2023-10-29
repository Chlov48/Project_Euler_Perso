#include <iostream>
using namespace std;

int diffBetweenSum(int x){
    int sum1,sum2;
    sum1 = 0;
    sum2 = 0;
    for(int i = 1; i<=x;i++){
        sum1 += i;
    }
    sum1*=sum1;
    for(int i= 1; i<=x; i++){
        sum2 += i*i;
    }
    return sum1-sum2;
}

int main()
{
    cout << diffBetweenSum(100) << endl;
    return 0;
}
