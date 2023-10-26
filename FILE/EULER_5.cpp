#include <iostream>
using namespace std;

int smallest(int x){
    for(int i = 1; 1==1; i++){
        for(int j=1; j<=x; j++){
            if((i%j)!=0){break;}
            if(j==x){return i;}
            
        } 
    }
}

int main()
{
    cout << smallest(20) << endl;
    return 0;
}
