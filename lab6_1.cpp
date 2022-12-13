#include<iostream>
using namespace std;

int main(){
    int num;
    int counteve = 0, countodd = 0;


    cout << "Enter an integer: ";
    cin >> num;
    while(num != 0)
    {
        if (num %2 == 0)
        {
            counteve++;
        }
        else
        {
            countodd++;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }
    cout << "#Even numbers = " << counteve <<"\n";
    cout << "#Odd numbers = " << countodd <<"\n";


    return 0;
}
