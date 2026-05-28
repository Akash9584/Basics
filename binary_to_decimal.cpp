#include <iostream>
using namespace std;
void binTodec(int binnum){
    double ans = 0, power = 1;
    while (binnum > 0){
        double remender = binnum % 10;
        ans += (remender * power);
        binnum /= 10 ;
        power *= 2;
    }
    cout<< "Decimal Number: "<<ans<<endl;
}
int main(){
    double n;
        cout<<"Enter Binary Number: ";
        cin>>n;
    binTodec(n);
    return 0;
}