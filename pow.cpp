#include "Expression.h"

Pow::Pow(Expression *_left,int n)
{
   left = _left;
   data=n;
}

Pow::~Pow()
{
    delete left;
   delete right;
}
Expression *Pow::diff()
{
    /*diffleft=left->diff();
    diffright=right->diff();*/
    return new Mul(new Number(data),new Pow(left, data-1));

    //return new left->diff();
}

void Pow::print()
{
    cout<<"(";
    left->print();
    cout<<")^(";
    cout<<data;
    cout<<")";

}


