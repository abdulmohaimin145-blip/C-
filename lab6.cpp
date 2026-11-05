// TASK # 01 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    cin >> text;

    cout << "Reverse: ";

    for (int i = text.length() - 1; i >= 0; i--) {
        cout << text[i];
    }

    return 0;
}

// TASK # 02 

#include <iostream>
#include <string>
using namespace std;
int main() {

     string text;

     cout << "Enter a string: ";
     cin >> text;

    cout << "Total Characters: " << text.length();

    return 0;
}

// TASK # 03

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    cin >> text;

    for (int i = 0; i < text.length(); i++) {
        text[i] = toupper(text[i]);
    }

    cout << "Uppercase: " << text;

    return 0;
}


// TASK # 04

#include <iostream>
#include <string>
using namespace std;

int main() {
     string text;

     cout << "Enter a string: ";
     cin >> text;

    if (text[0] == text[text.length() - 1]) {
        cout << "First and Last characters are same";
    }
    else {
        cout << "First and Last characters are different";
    }

    return 0;
}


// TASK # 05

#include <iostream>
#include <string>
using namespace std;

int main() {
     string first, last;

     cout << "Enter first name: ";
     cin >> first;

    cout << "Enter last name: ";
    cin >> last;

    string fullName = first + " " + last;

    cout << "Full Name: " << fullName;

    return 0;
}