#include <iostream>
using namespace std;
class hero
{
    int health;
    int level;

public:
    int gethealth()
    {
        return health;
    }
    hero(int health){//parameterized constructor
        this->health=health;//this stores the adress of the object this mtlb h ke health me class ka health store ho gaya

    }
    hero(hero &temp){//copy constructor
        this->health=temp.health;
        this->level=temp.level;
    }
    void operator +(hero &obj){
        cout<<this->health+obj.health;
    }
};

int main()
{
    /*// dynamic allocation
    hero *h = new hero(80);
    delete h;//dynamically ke liye manually destructor all krna padta hai
    (*h).gethealth();
    h->gethealth();

    hero s(90);
    hero jain(s);*/
    hero a(10);
    hero b(20);
    a+b;//b as an input..
}