#include <iostream>
#include <cmath>

using namespace std;

int chiffre(int x, int n){
    return ((x%(int)pow(10,n))/(int)pow(10,n-1));
}

bool isPalindrome(int x){
    int l = std::to_string(x).length();
    for(int i =1; i<=l; i++){
        if(chiffre(x,i)!=chiffre(x,l+1-i)){return false;}
    }return true;
}

int largestPalindrome(int n){
    int max = 0;
    for(int i = 1; i < pow(10,n); i++){
        for(int j = 1; j < pow(10,n); j++){
            if(i*j > max){
                if(isPalindrome(i*j)){
                    max = i*j;
                }
            }
        }
    }return max;
}

int main()
{
    cout << largestPalindrome(3) << endl;
    return 0;
}
