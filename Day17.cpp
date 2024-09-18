// Ques 1: Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows: "<< endl;
    cin>>n;
    cout<<"Enter the number of columns: " <<endl;
    cin>>m;
    int arr[n][m];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int k;
    cout << "Enter element to be searched: " <<endl;
    cin >> k;
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                found=true;
                break;
            }else{
                found=false;
            }
        }
    }
    if(found){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}
// Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows: "<< endl;
    cin>>n;
    cout<<"Enter the number of columns: " <<endl;
    cin>>m;
    int arr[n][m];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            s+=arr[i][j];
        }
    }
    cout << "Sum of all elements in the 2d array is : " << s;
    return 0;
}
