#include<iostream>
using namespace std;

int main(){
    int count=1,odd=0,even=0;
    while (count !=0){
        cout << "Enter an integer: ";
        cin >> count;
    if (count !=0){    
        if(count %2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    }
    cout << "#Even numbers = " <<even<<endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
