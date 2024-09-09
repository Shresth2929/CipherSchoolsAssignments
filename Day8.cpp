// Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

// Sample Input:- str1 = "Hello, World!"
// Output:- 13

#include <iostream>
#include <string>
using namespace std;

int stringLength(const std::string &str){
    return str.length();
} 

int main(){
    string s1="Shresth Veer Singh";
    string s2="Hello, World!";
    string s3="C++ is fun";
    cout << "Length of string s1 is: " << stringLength(s1) << endl;
    cout << "Length of string s2 is: " << stringLength(s2) << endl;
    cout << "Length of string s3 is: " << stringLength(s3) << endl;
    return 0;
}


// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

// Sample Input:- String ="Hello, World!"
// character=’l’
// Output:- 3

#include <iostream>
#include <string>
using namespace std;

int countCharacter(const std::string &str, char ch){
    int count = 0;
    for(char c:str){
        if(c==ch){
            count++;
        }
    }return count;
}
int main(){{
    string s1="Shresth Veer Singh";
    char ch1='e';
    string s2="Hello, World!";
    char ch2='l';
    string s3="C++ is fun";
    char ch3='n';
    cout << "The character '" << ch1 << "' appears " << countCharacter(s1, ch1) << " times." <<endl;
    cout << "The character '" << ch2 << "' appears " << countCharacter(s2, ch2) << " times." <<endl;
    cout << "The character '" << ch3 << "' appears " << countCharacter(s3, ch3) << " times." <<endl;

    return 0;
}}


// Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

// Sample Input : - str1 = "Hello, "
// str2 = "World!"

// Sample Output :- "Hello, World!"

#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(const std::string &str1, const std::string &str2){
    return str1+str2;
}

int main(){
    string s1="Shresth Veer";
    string s2=" Singh";
    string s3="Dead";
    string s4="pool";
    cout << concatenateStrings(s1,s2) << endl;
    cout << concatenateStrings(s3,s4)<< endl;

}