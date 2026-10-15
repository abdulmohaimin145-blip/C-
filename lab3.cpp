// TASK # 01

#include <iostream>
using namespace std;

int main() {
    string name = "Ali";
    int age = 20;
    float GPA = 3.5;

    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << GPA << endl;

    return 0;
}

// TASK # 02 

#include <iostream>
using namespace std;

int main() {
    // Declare variables to store student information
    string name = "Ali";
    int age = 20;
    float GPA = 3.5;

    /*
       Display student information.
       cout is used to print output on the screen.
    */

    cout << "Student Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << GPA << endl;

    return 0;
}


// TASK # 03


#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string department;
    int age;
    float GPA;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> GPA;

    cout << "Enter department: ";
    cin >> department;

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << GPA << endl;
    cout << "Department: " << department << endl;

    return 0;
}


// TASK # 04 


#include <iostream>
using namespace std;

int main() {
    int age;
    int birthYear;

    cout << "Enter your age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "Your age: " << age << endl;
    cout << "Your birth year: " << birthYear << endl;

    return 0;
}


// TASK # 05 

#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    double fee = 25000.75;

    cout << "Student Grade: " << grade << endl;
    cout << "Student Fee: " << fee << endl;

    return 0;
}