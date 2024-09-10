// Ques1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: YES


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array:";
    cin >>n;
    int arr[n];
    cout << "Enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter target value:";
    cin >> k;
    int found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            found=true;
        }}
    if(found){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;

}

//  Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array:";
    cin >>n;
    int arr[n];
    cout << "Enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter target value:";
    cin >> k;

    for(int i=0;i<n;i++){
        if(arr[i]==k){

            cout << i;
        }else{
            cout << -1;
        }
        }
    return 0;


}
