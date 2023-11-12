#include <iostream>
using namespace std;

int lettersInName(int n){
    int x = 0;
    int unite = n%10;
    int dizaine = (n%100)/10;    
    int centaine = (n%1000)/100;
    int thousand = (n%10000)/1000;
    if(dizaine == 1){ //ten to nineteen
        if(unite == 0){x+=3;}
        if(unite == 1){x+=6;}
        if(unite == 2){x+=6;}
        if(unite == 3){x+=8;}
        if(unite == 4){x+=8;}
        if(unite == 5){x+=7;}
        if(unite == 6){x+=7;}
        if(unite == 7){x+=9;}
        if(unite == 8){x+=8;}
        if(unite == 9){x+=8;}
    }
    if(!(dizaine == 1)){ //chiffre unité
        if(unite == 0){x+=0;}
        if(unite == 1){x+=3;}
        if(unite == 2){x+=3;}
        if(unite == 3){x+=5;}
        if(unite == 4){x+=4;}
        if(unite == 5){x+=4;}
        if(unite == 6){x+=3;}
        if(unite == 7){x+=5;}
        if(unite == 8){x+=5;}
        if(unite == 9){x+=4;}
    }
    if(1==1){ //chiffre unité
        if(dizaine == 2){x+=6;}
        if(dizaine == 3){x+=6;}
        if(dizaine == 4){x+=5;}
        if(dizaine == 5){x+=5;}
        if(dizaine == 6){x+=5;}
        if(dizaine == 7){x+=7;}
        if(dizaine == 8){x+=6;}
        if(dizaine == 9){x+=6;}
    }
    if(centaine !=0){x+=7;}
    if(centaine != 0){ //chiffre centaine
        if(centaine == 1){x+=3;}
        if(centaine == 2){x+=3;}
        if(centaine == 3){x+=5;}
        if(centaine == 4){x+=4;}
        if(centaine == 5){x+=4;}
        if(centaine == 6){x+=3;}
        if(centaine == 7){x+=5;}
        if(centaine == 8){x+=5;}
        if(centaine == 9){x+=4;}
    }
    if(thousand !=0){x+=8;}
    if(centaine != 0 && (n%100)!=0){x+=3;}
    if(thousand != 0 && (n%1000)!=0){x+=3;}
    if(thousand != 0){ //chiffre millier
        if(thousand == 1){x+=3;}
        if(thousand == 2){x+=3;}
        if(thousand == 3){x+=5;}
        if(thousand == 4){x+=4;}
        if(thousand == 5){x+=4;}
        if(thousand == 6){x+=3;}
        if(thousand == 7){x+=5;}
        if(thousand == 8){x+=5;}
        if(thousand == 9){x+=4;}
    }
    return x;
}

int sumOfAll(int n){
    int x = 0;
    for(int i = 1;i <=n;i++){
        x+=lettersInName(i);
    }
    return x;
}

int main()
{
    cout << sumOfAll(1000) << endl;
    return 0;
}

