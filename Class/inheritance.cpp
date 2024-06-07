#include<bits/stdc++.h>
using namespace std;

class vehicle //parent class
{
public:
    string color;
    int max_speed;
};
//childclasses along with their own member functions;
class car : public vehicle
{
    int num_gears;
    public:
    void setGears(int x)
    {
        this->num_gears=x;
    }
    int  getGears()
    {
        return this->num_gears;
    }
};
class bicycle : public vehicle
{
    bool is_foldable;
};
class truck : public vehicle
{
    int max_weight;
};
int main()

{
    car Volvo;
    bicycle Btwin;
    truck chhota_hathi;
    Volvo.color="black";
    Volvo.setGears(10);
    cout<<Volvo.getGears()<<endl;


}