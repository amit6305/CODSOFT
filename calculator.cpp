#include<iostream>
using namespace std;

int main(){
    char op;
    int a;
    int b;

    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the vlue of b:"<<endl;
    cin>>b;

    switch (op)
    {
    case '+':
        cout<<"Addition of a and b is:"<< a+b <<endl;
        break;
    case '-':
        cout<<"Substraction of a and b is:"<< a-b <<endl;
        case '*':
        cout<<"Multiplication of a and b is:"<< a*b <<endl;
        break;
    case '/':
        cout<<"" ;
    default:
        break;
    }
}