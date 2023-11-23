#include <iostream>
#include <vector>
using namespace std;

vector<int> tab(160);

vector<int> factoRecusif(vector<int> tab, int n){
    if(n == 1){
        return tab;
    }
    vector<int> x = factoRecusif(tab, (n-1));
    for(int i = (int)x.size()-1; i >= 0; i--){
        x.at(i) = x.at(i)*n;
    }
    for(int i = 0; i < (int)x.size()-1; i++){
        x.at(i+1) += x.at(i) / 10;
        x.at(i) = x.at(i) % 10;
    }
    return x;
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
    tab.at(0) = 1;
    cout << sumOfAll(factoRecusif(tab,100)) << endl;
    return 0;
}
