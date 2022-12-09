#include<iostream>
using namespace std;

int main(){
    int num,even=0,odd=0;
    cout << "Enter an integer: " ;
    cin >> num;
    if(num%2 == 0){
        if(num!=0){
            even=even+1;
        }else{
            even = even;
            }
    }else{
        odd=odd+1;
    }
    while (num != 0)
    {
        cout << "Enter an integer: " ;
        cin >> num;
          if(num%2 == 0){
             if(num!=0){
            even=even+1;
            }else{
            even = even;
            }
          }
          else{
             odd=odd+1;
          }
    
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}