#include "Expression.h"

Add::Add(Expression *_left,Expression *_right)
{
    left = _left;
    right = _right;
}

Add::~Add()
{
   delete left;
   delete right;
}
Expression *Add::diff()
{
    /*left=left->diff();
    right=right->diff();*/
    return new Add(left->diff(),right->diff());
    //return new left->diff();
}

void Add::print()
{
    cout<<"(";
    left->print();
    cout<<"+";
    right->print();
    cout<<")";
}
