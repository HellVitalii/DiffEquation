#include "Expression.h"

Div::Div(Expression *_left,Expression *_right)
{
   left = _left;
   right = _right;
}

Div::~Div()
{
    delete left;
   delete right;
}
Expression *Div::diff()
{
    /*diffleft=left->diff();
    diffright=right->diff();*/
    return new Div(new Sub(new Mul(left->diff(),right),new Mul(right->diff(),left)),new Pow(right,2));

    //return new left->diff();
}

void Div::print()
{

    cout<<"(";
    left->print();
    cout<<")/(";
    right->print();
    cout<<")";
}

