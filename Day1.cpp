// Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

// Sample Input :- Enter the first string: Hello
// Enter the second string: World

// Sample Output:- Concatenated string: HelloWorld

#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string s1;
    string s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout <<  "Enter the second string: ";
    cin >> s2;
    string concat=s1+s2;
    cout <<  "Concatenated string: " << concat;

    return 0;
}

// Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

// Sample Input:- Enter grade 1: 85
// Enter grade 2: 90
// Enter grade 3: 78
// Enter grade 4: 92
// Enter grade 5: 88

// Sample Output:- The average grade is: 86.6


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double g1, g2, g3, g4, g5;
    double average;
    cout<<"Enter grade: ";
    cin >> g1;
    cout<<"Enter grade: ";
    cin >> g2;
    cout<<"Enter grade: ";
    cin >> g3;
    cout<<"Enter grade: ";
    cin >> g4;
    cout<<"Enter grade: ";
    cin >> g5;
    double s=g1+g2+g3+g4+g5;
    average=s/5.0;
    cout << "The average grade is: " << average;

    return 0;
}

// Ques- 03 Write a C++ program that takes an integer as input from the user and outputs its square.

// Sample Input:- Enter a number: 7

// Sample Output :- The square of 7 is: 49


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sq=n*n;
    cout << "Square of " << n << " is: " << sq;
    return 0;
}
