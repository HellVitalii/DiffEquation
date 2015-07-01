#include "Expression.h"

Ln::Ln(int d)
{
    data=d;
}

Expression *Ln::diff()
{
    return new Number(0);
}

void Ln::print()
{

    cout<<"ln"<<data;

}
Ln::~Ln()
{

}

