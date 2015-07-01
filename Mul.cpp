#include "Expression.h"

Mul::Mul(Expression *_left,Expression *_right)
{
   left = _left;
   right = _right;
}

Mul::~Mul()
{
    delete left;
   delete right;
}
Expression *Mul::diff()
{
    /*diffleft=left->diff();
    diffright=right->diff();*/
    return new Add(new Mul(left->diff(),right),new Mul(right->diff(),left));

    //return new left->diff();
}

void Mul::print()
{

    cout<<"(";
    left->print();
    cout<<"*";
    right->print();
    cout<<")";

}








