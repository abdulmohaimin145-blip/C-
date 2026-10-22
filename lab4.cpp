// TASK # 01

// #include <iostream>
// using namespace std;

// int main() {
//     int marks;

//     cout << "Enter marks: ";
//     cin >> marks;

//     if (marks >= 50) {
//         cout << "Pass";
//     } else {
//         cout << "Fail";
//     }

//     return 0;
// }


// TASK # 02

// #include <iostream>
// using namespace std;

// int main() {
//     int num;

//     cout << "Enter a number: ";
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << "Even";
//     } else {
//         cout << "Odd";
//     }

//     return 0;
// }

// TASK # 03 

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     if (a > b) {
//         cout << a << " is larger";
//     } else if (b > a) {
//         cout << b << " is larger";
//     } else {
//         cout << "Both numbers are equal";
//     }

//     return 0;
// }

// TASK # 04
// using for loop
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 20; i++) {
//         cout << i << " ";
//     }

//     return 0;
// }

// using while loop

// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;

//     while (i <= 20) {
//         cout << i << " ";
//         i++;
//     }

//     return 0;
// }


// TASK # 05

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}