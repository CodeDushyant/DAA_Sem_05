#include <bits/stdc++.h>
using namespace std;

int main() {
    time_t now = time(0);           // current time in seconds
    tm *ltm = localtime(&now);      // convert to local time

    cout << "Date: " 
         << ltm->tm_mday << "-" 
         << 1 + ltm->tm_mon << "-"    // months start from 0
         << 1900 + ltm->tm_year       // years start from 1900
         << endl;

    cout << "Time: "
         << ltm->tm_hour << ":"
         << ltm->tm_min << ":"
         << ltm->tm_sec
         << endl;

    return 0;
}
