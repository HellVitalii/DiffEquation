#include "Expression.h"

Number::Number(int d)
{
    data=d;
}

Expression *Number::diff()
{
    return new Number(0);
}

void Number::print()
{
    cout<<data;
}
Number::~Number()
{

}
