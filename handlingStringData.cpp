// Basics of string data and showing limitations of cin
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nameDefault;
    string nameGetLine;
    cout << "Input your full name please with getLine\n";
    getline(cin, nameGetLine);
    cout << "Input your full name please with cin\n";

    cin >> nameDefault;

    cout << "Hello! Your name with cin is " << nameDefault << "\n";
    cout << "Hello! Your name with getline is " << nameGetLine << "\n";

    return 0;
}