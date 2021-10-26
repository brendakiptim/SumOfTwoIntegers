//Simple User Profile
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declare and initialize variables
    string firstName, lastName, favouriteMovie, favouriteMeal, fullName = "";
    cout << "Let's create your user profile!\n";
    cout << "Input your first name\n";
    getline(cin, firstName);
    cout << "Input your last name\n";
    getline(cin, lastName);
    cout << "Input your favourite movie\n";
    getline(cin, favouriteMovie);
    cout << "Input your favourite meal\n";
    getline(cin, favouriteMeal);
    cout << "\n";
    fullName = firstName + " " + lastName;

    cout << fullName << " profile details:\n";
    cout << "---------------------------------\n";
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "Full Name: " << fullName << "\n";
    cout << "Favourite Movie: " << favouriteMovie << "\n";
    cout << "Favourite Meal: " << favouriteMeal << "\n";
    cout << "---------------------------------\n";

    return 0;
}