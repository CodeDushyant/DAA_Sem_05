#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    GCD(b,a%b);
}
int main() {
    int a,b;
    cin>>a>>b;
    int c=GCD(a,b);
    cout<<"GCD is "<<c<<endl;
    return 0;
}