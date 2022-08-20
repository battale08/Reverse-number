#include<iostream>
using namespace std;

class test
{
    int num;
    public:
      test() {
        num = 4;
      }
    void operator ++(){                             //operator overloading for prefix 
        ++num;
    }
    void operator ++(int){                         //operator overloading for postfix
        num++;

    }

    void operator --(){                        //operator overloading for prefix (negative)
        --num;
    }
    void dispaly(){
        cout<<"value:"<<num<<endl;

    }  
    
};

    
main(){
    test t1;
    t1.dispaly();
    ++t1;
    t1.dispaly();
    t1++;
    t1.dispaly();
    --t1;
    t1.dispaly();
    return 0;
}

    
