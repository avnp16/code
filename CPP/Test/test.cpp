#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c,sum,mul,sub,div,max;

    a=170;
    b=500;
    c=200;
   // c+=b;
   // b++;
    

    sum=a+b;
    mul=a*b;
    sub=a-b;
    div=a/b;

    cout<<"Sum="<<sum<<endl;
    cout<<"Multi="<<mul<<endl;
    cout<<"Sub="<<sub<<endl;
    cout<<"Div="<<div<<endl;

    if (a>b)
    {
        cout<<"a is max"<<endl;
    }else cout<<"b is max"<<endl;

    if (a%2==0)
    {   
        cout<<"Even Number"<<endl;

    }else cout<<"Odd Number"<<endl;

    if (a!=b)
    {
        cout<<"a is not same as b"<<endl;
    } else cout<<"a and b are same"<<endl;
    
    if (a>b && a>c)
    {
        cout<<"a is max"<<endl;
    }else cout<<"a is min"<<endl;

    cout<<c;
    cout<<b;

    max=a>b?a>c?a:c:b>c?b:c;

    cout<<"max="<<max<<endl;

    return 0;
}
