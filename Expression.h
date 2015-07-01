#pragma once
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

class Expression
{
    public:
        virtual ~Expression() {};
        virtual Expression *diff()=0;
        virtual void print()=0;
    protected:
        Expression * left, *right;

};

class Number: public Expression
{
    public:
        Number(int);
        ~Number();
        Expression *diff();
        void print();
    protected:
    private:
        int data;
};

class Variable: public Expression
{
    public:
        Variable(char);
        ~Variable();
        Expression *diff();
        void print();
    protected:
    private:
        char data;
};

class Sub: public Expression
{
    public:
        Sub(Expression*, Expression*);
        ~Sub();
        Expression *diff();
        void print();
    protected:
    private:

};

class Add: public Expression
{
   public:
        Add(Expression*, Expression*);
        ~Add();
        Expression *diff();
        void print();
    protected:
    private:

};

class Mul: public Expression
{
     public:
        Mul(Expression*, Expression*);
        ~Mul();
        Expression *diff();
        void print();
    protected:
    private:

};

class Div: public Expression
{
     public:
        Div(Expression*, Expression*);
        ~Div();
        Expression *diff();
        void print();
    protected:
    private:

};

class Pow: public Expression
{
     public:
        Pow(Expression*, int);
        ~Pow();
        Expression *diff();
        void print();
    protected:
    private:
        int data;

};

class Expa: public Expression
{
     public:
        Expa(int, Expression*);
        ~Expa();
        Expression *diff();
        void print();
    protected:
    private:
        int data;

};

class Ln: public Expression
{
    public:
        Ln(int);
        ~Ln();
        Expression *diff();
        void print();
    protected:
    private:
        int data;
};

Expression* read(char*);
int View(char*);
int length(char*);
