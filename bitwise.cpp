 #include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 10;
    // 0 & 0 = 0
    // 0 & 1 = 0
    // 1 & 0 = 0
    // 1 & 1 = 1
    cout << (a & b) << endl;
    // 0 | 0 = 0
    // 0 | 1 = 1
    // 1 | 0 = 1
    // 1 | 1 = 1
    cout << (a | b) << endl;
    // 0 ^ 0 = 0
    // 0 ^ 1 = 1
    // 1 ^ 0 = 1
    // 1 ^ 1 = 0
    cout << (a ^ b) << endl;
    cout << (4 << 1) << endl;
    cout << (10 << 2) << endl;
    cout << (10 >> 1) << endl;
    cout << (8 >> 2) << endl<<endl;
    cout<< sizeof(int)<<endl;
    cout<< sizeof(long int)<<endl;
    cout<< sizeof(short int)<<endl;
    cout<< sizeof(long long )<<endl;

    // int num,revesre = 0;
    //     cout<<"Enter a Number: ";
    //     cin>>num;
    // while (num >0){
    //     int digit = num % 10;
    //     revesre = revesre *10 + digit;
    //     num /= 10;
    // }    
    // cout<<"Reverse Number is: "<<revesre<<endl;
    return 0;
}