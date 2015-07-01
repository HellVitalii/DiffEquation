#include "Expression.h"

Expa::Expa(int n, Expression *_right)
{
   right = _right;
   data=n;
}

Expa::~Expa()
{

}
Expression *Expa::diff()
{
    /*diffleft=left->diff();
    diffright=right->diff();*/
    return new Mul(new Ln(data),new Expa(data, right));

    //return new left->diff();
}

void Expa::print()
{
    cout<<data;
    cout<<"^(";
    right->print();
    cout<<")";
}


