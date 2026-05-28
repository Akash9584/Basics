#include <iostream>
using namespace std;

void Check_Prime(int n){
    for(int i = 2; i<n/2; i++){
        if(n%i == 0){
            cout<<"Given Number is not prime."<<endl;
            return;
        }
    }
    cout<<"Given Number is prime."<<endl;
}

int main(){
    int n;
        cout<<"Enter a number: ";
        cin>>n;
    Check_Prime(n);
    return 0;
}