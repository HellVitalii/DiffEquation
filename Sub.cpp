#include "Expression.h"

Sub::Sub(Expression *_left,Expression *_right)
{
    left = _left;
    right = _right;
}

Sub::~Sub()
{
   delete left;
   delete right;
}
Expression *Sub::diff()
{
    /*left=left->diff();
    right=right->diff();*/
    return new Sub(left->diff(),right->diff());
    //return new left->diff();
}

void Sub::print()
{
    cout<<"(";
    left->print();
    cout<<"-";
    right->print();
    cout<<")";
}
