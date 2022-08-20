#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>> num;
    
    while(num > 0)                            //do till num greater than  0
    {
        int mod = num % 10;                  //split last digit from number
        cout<< mod<<endl;                     //print the digit. 
    
        num = num / 10;                      //divide num by 10. num /= 10 also a valid one 
    }
    
    return 0;
}