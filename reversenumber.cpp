#include<iostream>
using namespace std;

int main()
{
    int num, ans=0;
    cout<<"Enter a number\n";
    cin>> num;
    
    while(num > 0)                            //do till num greater than  0
    {
        int mod = num % 10;                  //split last digit from number
        
        ans = ans*10 + mod;                 //multiply ans with 10 and add the splitted digit
                         
        num = num / 10;                      //divide num by 10. 
    }
    
    cout<<"Reverse number is:"<<ans<<endl;
    
    return 0;
}