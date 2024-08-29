// Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

// Sample Input:- Enter a number: 5
// Sample Output:- The sum of the first 5 natural numbers is: 15"


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    cout << "Enter a no: ";
    cin >> a;
    int s=0;
    for(int i=1;i<=a;i++){
        s+=i;
    }
    cout << "The sum of the first " << a << " natural numbers is: " << s;
    
    return 0;
}

// Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

// Sample Input:- Enter a number: 4
// Sample Output:- The factorial of 4 is: 24

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    cout << "Enter a no: ";
    cin >> a;
    int f=a;
    int fact=1;
    while(a!=0){
        fact *=a;
        a--;
    }
    cout << "The factorial of " << f << " is " << fact;
  
    return 0;
}


// Ques-03: Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.

// Sample Input:- Enter a number: 3

// Sample Output:-
// Multiplication table of 3:
// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// 3 x 4 = 12
// 3 x 5 = 15
// 3 x 6 = 18
// 3 x 7 = 21
// 3 x 8 = 24
// 3 x 9 = 27
// 3 x 10 = 30

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    cout << "Enter a no: ";
    cin >> a;
    for(int i=1;i<11;i++){
        cout << a << " X " << i << " = " << a*i << endl;
    }
    return 0;
}
