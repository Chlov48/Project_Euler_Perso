#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> n (306);


vector<int> byTwo(int lim, vector<int> n){
    n.at(0) = 2;
    for(int i = 1; i < lim; i++){
        for(int j = (int)n.size()-1; j >= 0 ; j--){
            n.at(j) *= 2;
            if(n.at(j) > 9){
                n.at(j) = n.at(j)%10;
                n.at(j+1)++;
            }
        }
    }
    return n;
}

int sumOfAll(vector<int> n){
    int x =0;
    for(int i = 0; i< (int)n.size();i++){
        x+=n.at(i);
    }
    return x;
}
    
int main()
{
    cout << sumOfAll(byTwo(1000,n)) << endl;
    return 0;
}
