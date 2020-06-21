#include "returnnumbersum.h"
#include <iostream>

ReturnNumberSum::ReturnNumberSum()
{

}

int ReturnNumberSum::sum()
{
    using namespace std;
    int a, b;
    cout << "Please enter first integer value: ";
    cin >> a;
    cout << "Please enter second integer value: ";
    cin >> b;

    return a + b;
};
