#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0)); // seed random number generator
    string s = "";
    for (int i = 0; i < 32; i++) {
        cout<<"Randoms "<<rand()<<endl;
        int a = rand() % 10;  // random number between 0–9
        if (a % 2 == 0)
            s += '0';
        else
            s += '1';
    }
    long long ans=stoll(s,0,2);
    cout << "Ans is " << ans << endl;
    return 0;
}
