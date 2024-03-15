#include "basic-calculator.h"

int add(int a, int b)
{
    return a + b;
}


int subtract(int a, int b)
{
    return a - b;
}


int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << add(a, b) << endl;                                                                                                                                                                                                                                                    
    return 0;
}