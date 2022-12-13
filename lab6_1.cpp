#include<iostream>
using namespace std;

int main(){
    int odd = 0;
    int even = 0;
    int num ;

    while(num != 0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num % 2 == 0){
            even = even + 1;
        }
        else{
            odd = odd + 1;
        }

    }
    cout << "#Even numbers = " <<even<<"\n";
    cout << "#Odd numbers = "<<odd-1;


    return 0;
}
