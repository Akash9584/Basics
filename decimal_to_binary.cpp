#include <iostream>
using namespace std;
int decTobinary(int decnum){
    int ans = 0, power = 1;
    while (decnum > 0){
        int remender = decnum % 2 ;
        ans += (remender * power);
        decnum /= 2;
        power *= 10;
    }
    return ans;
}
int main (){
    int i = 0;
    for(; i<= 10; i++){
        cout<<i<< " = ";
        cout<<decTobinary(i)<<endl;
    }
    return 0;
}