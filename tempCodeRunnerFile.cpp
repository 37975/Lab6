#include<iostream>
using namespace std;

int main(){
    int num,odd = 0,even = 0;
    while (num != 0)
    {
        cout << "Enter an integer: ";
        cin >> num;
        if (num%2 == 0 && num != 0){
            even++;
        }else if(num%2 != 0){
            odd++;
        }
    }
    cout << "#Even numbers = " <<even;
    cout << "#Odd numbers = " << odd;
    return 0;
}
