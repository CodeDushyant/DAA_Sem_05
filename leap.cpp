#include<bits/stdc++.h>
using namespace std;

int dateOddDay(int d, string m, int y) {
    unordered_map<string, int> month;
    month["jan"] = 31;

    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        month["feb"] = 29;
    } else {
        month["feb"] = 28;
    }
    month["mar"] = 31;
    month["apr"] = 30;
    month["may"] = 31;
    month["jun"] = 30;
    month["jul"] = 31;
    month["aug"] = 31;
    month["sep"] = 30;
    month["oct"] = 31;
    month["nov"] = 30;
    month["dec"] = 31;

    vector<string> months = {"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};

    int sumdays = 0;
    for (auto& mon : months) {
        if (mon == m) {
            sumdays += d;
            break;
        } else {
            sumdays += month[mon];
        }
    }
    return sumdays % 7;
}


int yearwiseodd(int od2){
    int leap_year=od2/4;
    int years=od2-leap_year;
    int oddDay=(leap_year*2)+years;
    return oddDay%7;
}
int odd(int y){
    // cout<<"the value of y "<<y<<endl;
    int r=y%400;
    // cout<<"Remainder"<<r<<endl;
    int od=r/100;
    // cout<<"od "<<od<<endl;
    int centryOd;
    if(od==1){
        centryOd=5;
    }else if(od==2){
        centryOd=3;
    }else if(od==3){
        centryOd=1;
    }else{
        centryOd=0;
    }
    int od2=r%100;
    int year=yearwiseodd(od2);
    return year+centryOd;
}
int main(){
    int d,y;
    cout<<"Enter date "<<endl;
    cin>>d;
    cout<<"Enter Month "<<endl;
    string m;
    cin>>m;
    cout<<"Enter Year "<<endl;
    cin>>y;
    unordered_map<int,string>mp;
    mp[0]="Sunday";
    mp[1]="Monday";
    mp[2]="Tuesday";
    mp[3]="Wednesday";
    mp[4]="Thursday";
    mp[5]="Friday";
    mp[6]="Saturday";
    int x=y-1;
    // cout<<"The year "<<x<<endl;
    int oddday=odd(x);
    int oda=dateOddDay(d,m,y);
    int totaloddDays=(oddday+oda)%7;
    cout<<"Your day is on that day  is "<<mp[totaloddDays];
    return 0;
}
