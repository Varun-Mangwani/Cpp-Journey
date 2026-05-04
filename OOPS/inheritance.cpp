#include <iostream>
using namespace std;

class sum
{

public:
    int add;
    int a;
    int b;

    void setter(int p, int q)
    {
        a = p;
        b = q;
    }

    void ope()
    {
        add = a + b;
        cout << endl
             << add << endl;
    }
};

class subst : public sum
{
public:
    int sub;
    void ope()
    {
        sub = a - b;
        cout << endl
             << sub << endl;
    }
};
class mult : public sum{
    public:
    void ope() {
        int mult;
        mult = a*b;
        cout << endl << mult << endl;
    }
};

class d : public sum{
    
    public:
    void ope() {
        int dev;
        dev = a/b;
        cout << endl <<  dev << endl;

    }
};

class mod : public sum {
    
    public:
     void ope() {
        int mo;
        mo = a%b;
        cout << endl << mo << endl;
     }
};

int main()
{

    //sum
    sum s;
    s.setter(2,3);
    s.ope();

    //dubdtraction
    subst s1;
    s1.setter(2,3);
    s1.ope();
    
    //multiply
    mult m;
    m.setter(4,5);
    m.ope();

    //division 
    d de;
    de.setter(10,5);
    de.ope();
    
    //modulo
    mod m1;
    m1.setter(2,4);
    m1.ope();

    return 0;
}