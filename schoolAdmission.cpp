#include <iostream>
using namespace std;

int main()
{

    //declare and initialize variable age
    int age = 0;

    //accept age input
    cout << "Please input your child's age\n";
    cin >> age;

    // check if true
    if (age >= 4)
    {
        cout << "Congratulations! Your child has been admitted!\n";
    }
    // run if condition is false
    else
    {
        cout << "Unfortunately your child is too young to be admitted\n";
    }
    return 0;
}