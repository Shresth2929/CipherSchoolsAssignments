// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.

#include <iostream>
using namespace std;
int main() {
    int n=123;
    int *ptr=&n;

    cout << "Value using the variable: " << n <<endl;
    cout << "Value using the pointer: " << *ptr <<endl;
    cout << "Address: " << ptr <<endl;
    return 0;

}    

// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.

#include <iostream>
using namespace std;

int main(){
    return 0;
    int arr[]={10,23,45,67,99};
    int *ptr=arr;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout << *(ptr+i)<< " ";
    }
    return 0;
}


// Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.

#include <iostream>
using namespace std;

int main(){
    int num = 42;
    int *ptr = &num;
    int **ptrToPtr = &ptr;

    cout << "Using variable: " << num << endl;
    cout << "Using pointer: " << *ptr << endl;
    cout << "Using pointer to the pointer: " << **ptrToPtr << endl;

    return 0;
}
