#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int> > tab = {
    {75},
    {95,64},
    {17,47,82},
    {18,35,87,10},
    {20,04,82,47,65},
    {19,01,23,75,03,34},
    {88,02,77,73,07,63,67},
    {99,65,04,28,06,16,70,92},
    {41,41,26,56,83,40,80,70,33},
    {41,48,72,33,47,32,37,16,94,29},
    {53,71,44,65,25,43,91,52,97,51,14},
    {70,11,33,28,77,73,17,78,39,68,17,57},
    {91,71,52,38,17,14,91,43,58,50,27,29,48},
    {63,66,04,68,89,53,67,30,73,16,69,87,40,31},
    {04,62,98,27,23,9,70,98,73,93,38,53,60,04,23} };

vector<bool> intToBinary(int x){
    vector<bool> tab(15);
    for(int i =0; i <15; i++){
        if(x >= pow(2,14-i)){
            tab.at(i) = 1;
            x -= (int)pow(2,14-i);
            
        }
    }return tab;
}

int sumTroughPath(vector<bool> path){
    int x =0;
    int j =0;
    for(int i = 0; i < 15; i++){
        x += tab.at(i).at(j);
        j += path.at(i);
    }
    return x;
}

int longestSum(){
    int x =0;
    vector<bool> path;
    for(int i = 0; i < pow(2,15); i++){
        path = intToBinary(i);
        if(sumTroughPath(path) > x){
            x = sumTroughPath(path);
        }
        
    }
    return x;
}

int main()
{
    cout << longestSum();
    return 0;
}
