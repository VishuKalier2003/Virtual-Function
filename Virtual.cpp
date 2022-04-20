// Implementation of Virtual Functions...
#include <iostream>
using namespace std;
class Vertebrates      // Base class
{
    public:
    int limbs;
    public:
        virtual void ShowDetails()   // virtual keyword to make the specific function virtual
        {cout << "Vertebrates have limbs !! " << endl;}   // This function will be Overriden fo sure
        void FourLegged()
        {cout << "Vertebrates can be a four-legged animals !!" << endl;}
};
class Birds: public Vertebrates   // derived class
{
    public:
        void ShowDetails()
        {cout << "Birds have limbs transformed to wings !!" << endl;}
        void FourLegged()   // This function is not overriden
        {cout << "Birds are not four-legged animals !!" << endl;}
};
class Mammals: public Vertebrates     // derived class
{
    public:
        void ShowDetails()
        {cout << "Mammals have limbs transformed into arms and legs !!" << endl;}
        void FourLegged()       // This function is not overriden
        {cout << "Mammals are not four-legged animals !!" << endl;}
};
int main()
{
    Vertebrates *verte;     // Base class pointer
    Birds bird;
    Mammals mammal;
    verte = &bird;
    verte -> ShowDetails();    // Overriden function (Derived class function will be called)
    verte -> FourLegged();    // Not Overriden function (Base class function will be called)
    verte = &mammal;
    verte -> ShowDetails();   // Overriden function (Derived class function will be called)
    verte -> FourLegged();   // Not Overriden function (Base class function will be called)
    return 0;
}