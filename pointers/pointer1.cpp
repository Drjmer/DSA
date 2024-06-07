#include<bits/stdc++.h>
using namespace std;
void fxn1(int a)
{
    a++;
}
void fxn2(int *a)
{
    (*a)++;
}
int main(){
    int a=5;
    int *p=&a;
    int **q=&p;
    
    cout<<*(*q)<<endl; //*q give p and *p give value of a ;
    //to find address of a using q;
    cout<<"------------------------------------------"<<endl;
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    cout<<*(ptr+1)<<endl;
    char ch[]="abcd";
    char *ch1=ch;
    cout<<*(ch1)<<endl;
    return 0;

}