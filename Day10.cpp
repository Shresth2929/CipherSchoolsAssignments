// Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

// Example:

// Input: {1, 5, 3, 9, 2}
// Output: 9


#include<iostream>
using namespace std;

int findMax(const int arr[], int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
    }}
    return max;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxValue=findMax(arr,n);
    cout << "Maximum value: " << maxValue;
    return 0;

}


// Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

// Example:

// Input: "A man, a plan, a canal, Panama"
// Output: true


#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(const std::string &str){
    string temp = str;
    string newOne;
    for(char c:temp){
        if(isalnum(c)){
            newOne+=tolower(c);
        }
    }
    temp=newOne;

    int start = 0;
    int end = temp.length() - 1;

    while (start < end) {
        if (temp[start] != temp[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main(){
    string str;
    cout << "Enter string: ";
    getline(cin ,str);
    
    if (isPalindrome(str)) {
        cout << "The string is palindrome." << endl;
    } else {
        cout << "The string is not palindrome." << endl;
    }


}

