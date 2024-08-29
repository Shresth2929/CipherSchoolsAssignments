// Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

// Sample Input:- Enter the first number: 10
// Enter the second number: 20
// Enter the third number: 15

// Sample Output :- The largest number is: 20

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if(a>b && a>c){
        cout << "The largest no. is: " << a;
    }else if(b>c && b>a){
        cout << "The largest no. is: " << b;
    }else{
        cout << "The largest no. is: " << c;
    }
   
    return 0;
}


// Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
// Grade Criteria:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59

// Sample Input:- Enter the score: 85
// Sample Output:- Grade: B"

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    cout << "Enter the score: ";
    cin >> a;
    if(a>90 && a<100){
        cout << "Grade: A";
    }else if(a>80 && a<90){
        cout << "Grade: B";
    }else if(a>70 && a<80){
        cout << "Grade: C";
    }else if(a>60 && a<70){
        cout << "Grade: D";
    }else{
        cout << "Grade: F";
    }
    return 0;
}



// Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

// Sample Input:-Enter a number : 5
// Sample Output :- The month is: May"


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    cout << "Enter a no: ";
    cin >> a;
    if(a==1){
        cout << "The month is January";
    }else if(a==2){
        cout << "The month is February";
    }else if(a==3){
        cout << "The month is March";
    }else if(a==4){
        cout << "The month is April";
    }else if(a==5){
        cout << "The month is May";
    }else if(a==6){
        cout << "The month is June";
    }else if(a==7){
        cout << "The month is July";
    }else if(a==8){
        cout << "The month is August";
    }else if(a==9){
        cout << "The month is September";
    }else if(a==10){
        cout << "The month is October";
    }else if(a==11){
        cout << "The month is November";
    }else{
        cout << "The month is December";
    }
    
    
    
    return 0;
}
