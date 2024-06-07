#include <iostream>
using namespace std;
class abstraction
{//hides the implementation and shows inly the relevant data
private:
    int a, b;

public:
   // method to set values of private members 
   
   void set(int *x, int *y)
    {
        this->a = *x;
        this->b = *y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    //implementAbstraction 
    abstraction obj;
    int a=10,b=20;
    obj.set(&a,&b);
    obj.display();
    
    return 0;
}

