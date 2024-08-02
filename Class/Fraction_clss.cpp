#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {

    // Complete the class
    public:
        int ntor,dtor;
        Fraction(int ntor,int dtor)
        {
            this->ntor=ntor;
            this->dtor=dtor;
        }
        void add(Fraction &b)
        {
            int x=this->ntor,y=this->dtor;
            this->ntor=(x*b.dtor)+(b.ntor*y);
            this->dtor=(y*b.dtor);
            
        }
        void multiply(Fraction &b)
        {
            int x=this->ntor,y=this->dtor;
            this->ntor=(x*b.ntor);
            this->dtor=(y*b.dtor);
            
        }
        void simplify()
        {
            int c=__gcd(this->ntor,this->dtor);
            this->ntor/=c;
            this->dtor/=c;
            
        }

        void print()
        {
            cout<<this->ntor<<"/"<<this->dtor<<endl;
        }
};

int main() {

    //Write your code here
    int nt,dt;cin>>nt>>dt;
    Fraction f1(nt,dt);
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int ntor,dtor,choice;
        cin>>choice>>ntor>>dtor;
        Fraction f2(ntor,dtor);
        
        if(choice==1)
        {
            f1.add(f2);
        }
        else if(choice==2)
        {
            f1.multiply(f2);
        }
        f1.simplify();

        f1.print();
        
    }

    return 0;
}