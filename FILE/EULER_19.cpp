#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

bool isYearBi(int year){
    if(year % 400 == 0){return true;}
    if(year % 100 == 0){return false;}
    if(year % 4 == 0){return true;}
    return false;
}

//c'est une abomination je sais mais flemme de galerer

const int dayInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
const string dayInWeek[7] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};

bool isDayValid(int day, int month, bool biYear){
    if((day <= 0) || (day > 31)){return false;}
    if((day > 0) && (day <= 28)){return true;}
    if((day == 29) && (month != 2)){return true;}
    if((day == 29) && (month == 2) && (biYear == true)){return true;}
    if((day == 29) && (month == 2) && (biYear == false)){return false;}
    if((day == 30) && (month == 2)){return false;}
    if((day == 30) && (month != 2)){return true;}
    if((day == 31) && (month == 1)){return true;}
    if((day == 31) && (month == 2)){return false;}
    if((day == 31) && (month == 3)){return true;}
    if((day == 31) && (month == 4)){return false;}
    if((day == 31) && (month == 5)){return true;}
    if((day == 31) && (month == 6)){return false;}
    if((day == 31) && (month == 7)){return true;}
    if((day == 31) && (month == 8)){return true;}
    if((day == 31) && (month == 9)){return false;}
    if((day == 31) && (month == 10)){return true;}
    if((day == 31) && (month == 11)){return false;}
    if((day == 31) && (month == 12)){return true;}



    else{return true;}
}

bool isDateValid(int day, int month, int year){
    //n'importe quel année est valide
    if ((month <= 0) || (month > 12)){return false;}
    return isDayValid(day, month, isYearBi(year));
}

bool printTommorow(int &day, int &month, int &year){
    if(!isDateValid(day, month, year)){
        cout << "la date entrée n'est pas valide." << endl;
        return 0;}
    if(isDateValid(day+1, month, year)){
        //cout << "le lendemain du " << day << "/"<< month << "/"<< year << " est le " << day+1  << "/"<< month << "/" << year << endl;
        day++;
        return 0;}
    if(isDateValid(1, month+1, year)){
        //cout << "le lendemain du " << day << "/"<< month << "/"<< year << " est le " << 1 << "/"<< month+1 << "/" << year << endl;
        day = 1;
        month++;
        return 0;}
    if(isDateValid(1, 1, year+1)){
        //cout << "le lendemain du " << day << "/"<< month << "/"<< year << " est le " << 1 << "/"<< 1 << "/" << year+1 << endl;
        day = 1;
        month = 1;
        year ++;
        return 0;}
    return 0;
}

int dayBetween(int day1,int month1,int year1,int day2,int month2,int year2){
    int dayToMonth1,dayToMonth2;
    dayToMonth1 = dayInMonth[month1-1] - day1;
    dayToMonth2 = day2;
    //int yearBetween = year2 - (year1+1);
    int daysElapsed = 0;
    for(int i = year1 + 1; i < year2; i++) {
        if(isYearBi(i)){
            daysElapsed += 366;
        }else{daysElapsed += 365;}
    }
    int daysElapsed2 = 0;
    for(int i = 0; i+1<month2; i++){
        daysElapsed2 += dayInMonth[i];
    }
    int daysElapsed3 = 0;
    for(int i = month1; i<12 ; i++){
        daysElapsed3 += dayInMonth[i];
    }
    //cout << daysElapsed << endl << daysElapsed2 << endl << daysElapsed3 << endl << dayToMonth1 << endl << dayToMonth2 << endl;
    return daysElapsed + daysElapsed2  + daysElapsed3 + dayToMonth1 + dayToMonth2;
}

int whatDayIsIt(int day,int month,int year){
    int timeBetween = dayBetween(2,1,1899,day,month,year);
    int dayIs = timeBetween % 7;
    cout << dayInWeek[dayIs]<<endl;
    return dayIs;
}


       
int main()
{
    int mDay,mMonth,mYear;
    mDay = 28;
    mMonth = 2;
    mYear = 2023;
    cout << mDay << "/" << mMonth << "/" << mYear << endl;
    printTommorow(mDay,mMonth,mYear);
    cout << mDay << "/" << mMonth << "/" << mYear << endl;
    cout << dayBetween(27,5,2022,20,10,2023) << endl;    // <3
    cout << dayBetween(1,1,1901,20,10,2023) << endl;
    cout << whatDayIsIt(22,10,2023)<<endl;
    int x = 0;
    for(int i = 1900; i < 2000; i++){
        for(int j = 1; j<=12; j++){
            if(whatDayIsIt(1,j,i) == 6){
                x++;
            }
        }
    }
    cout << x<<endl;
    
    
    return 0;
}
