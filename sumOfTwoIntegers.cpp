#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum = 0;
    cout << "Calculating sum of two integers input by user\n";
    cout << "--------------------------------------\n";
    cout << "Please input first integer\n";
    cin >> num1;
    cout << "Please input second integer\n";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum of" << num1 << " and " << num2 << " is " << sum << "\n";
    return 0;
}