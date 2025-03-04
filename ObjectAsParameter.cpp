//Method 1 call by Value(Passing Object As Parameter)
#include<iostream>
using namespace std;
class Program{
    public: int a;
    Program(int b){
        a =b;
    }
    void Display()
    {
        cout<<"Value of a is "<<a;
    }
};
void modify(Program obj2)//obj2 is used as parameter to modify function(any change inside this function will not modify original object)
{
    obj2.a=20;
    obj2.Display();//Any change made by object2 will not affect object 1 value
}
int main(){

 Program obj1(10);
 obj1.Display();
 modify(obj1);
}
/* IN Call by value , any change inside the function accepting object as parameter 
will not modify the original object, this will create a separate copy
copy of the class*/