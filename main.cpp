#include "Expression.h"

int length(char* str)
{
    int len;
    while(str[len])
    {
        len++;
    }
    return len;
}

int View(char *str)
{
    if (str[0]=='(') return 0;

    if (str[0]>='0' && str[0]<='9')
    {
        if (str[1]=='^') return 3;
        else return 1;
    }

    if (str[0]=='x') return 2;
}

Expression* read(char* str)
{
    char *q=str;
    if (View(str)==1) {return new Number(atoi(str));}
    if (View(str)==2) {return new Variable(str[0]);}
    if (View(str)==3)
    {
            return new Expa(int(str[0]-'0'),read(str+2));
    }

    char* left,*right;
    char zn;
    int len=0,i=1,k=0,l=1,r=0,sch=0;
    len=length(str);
    left=new char[len];
    right=new char[len];

    while(*q)
    {
        if (l==1) left[i-1]=str[i];
        if (r==1) right[i-sch]=str[i];

        if (str[i]=='(') k++;
        if (str[i]==')') k--;

        if (k==0 && l==1)
            {
                l=0;
                i++;*q++;
                zn=str[i];
                r=1;
                left[i-1]='\0';
                i++;k++;sch=i;
                right[i-sch]=str[i];
            }
        if (k==0 && l==0)
            {
                r=0;right[i]='\0';
            }
        *q++;i++;
    }


    Expression *e1=read(left);
    Expression *e2=read(right);
    //zn=znak();

    switch (zn)
	{
		case '+': return new Add (e1, e2);
		case '-': return new Sub (e1, e2);
		case '*': return new Mul (e1, e2);
		case '/': return new Div (e1, e2);
	}
}

int main()
{
    char* a;
    a= new char[256];
    cin>>a;
    Expression *e = read(a);
    //Expression *e = new  Expa(4,new Variable('x'));
    e->print();
    cout << "\n";
    Expression *de = e->diff();
    de->print();
    cout << "\n";
    return 0;
}
