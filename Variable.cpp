#include "Expression.h"

Variable::Variable(char nd)
{
    data=nd;
}

Variable::~Variable()
{
    //dtor
}

Expression *Variable::diff()
{
    return new Number(1);
}

void Variable::print()
{
    cout<<data;
}

