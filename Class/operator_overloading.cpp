#include<bits/stdc++.h>
using namespace std;
class add
{
    int a;
    public:
    int operator++(int)
    {
        this->a=this->a-1;
        return this->a;
    }
    int operator++()
    {
        return this->a+10;
    }
    void setA(int a)
    {
        this->a=a;
    }
};
int main()
{
    add a1;
    a1.setA(10);
    add b;
    b.setA(20);
    
    cout<<a1++<<endl;
    cout<<++a1;
}