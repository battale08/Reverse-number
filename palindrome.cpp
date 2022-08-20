#include<iostream>
using namespace std;

int main()
{
    //variable ans will have the reversed number
    int num, ans = 0,copy;
     cout<<"enter a number"<<endl;
    
     cin>>num;
    
    //assigning num value to variable copy for checking
    //Because after while loop num value becomes zero.
    copy = num;
    
    //do till num > 0
    while(num > 0)
    {
        //split the last digit 
        int mod = num % 10;
        
        //multiply ans with 10 and add the splitted digit
        ans = ans * 10 + mod;
        
        //divide num by 10
        num = num / 10;
    }
    
    //if both reversed and original number are equal, print palindrome
    
    if(ans == copy)
           cout<<"Palindrome"<<endl;
    else
           cout<<"Not a Palindrome"<<endl; //otherwise print non-palindrome
    
    return 0;
}