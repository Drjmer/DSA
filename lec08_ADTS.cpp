#include<bits/stdc++.h>
using namespace std;
struct myArray //this is our ADT (abstract data types)
{
    int total_size;
    int used_size;
    int *ptr;

};
void createArray(myArray *a,int tSize,int uSize)
{
    (*a).total_size=tSize;
    (*a).used_size=uSize;
    a->ptr=new int(sizeof(int)*uSize); //to initialize memory in heap and pointing ptr to the data
}
void get(myArray *a,int i) //use to get a particular index_value in an array
{
    cout<<(a->ptr)[i]<<endl;
}
void show(myArray *a)
{
    for(int i=0;i< a->used_size;i++)
    {
        cout<<(a->ptr)[i]<<" ";
    }
}
void setval(myArray *a)
{int n;
    for(int i=0;i<a->used_size;i++)
    {
        cout<<"Enter element: ";
        cin>>n; 
        (a->ptr)[i]=n;//poiinting to the ith index

        }
}
int main()
{
    myArray marks;
    createArray(&marks,100,2);
    setval(&marks);
    show(&marks);
    cout<<endl;
    int a;
    cin>>a;
    get(&marks,a);
    return 0;
}