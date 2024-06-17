// We need to reverse a given array

#include <iostream>

using namespace std;

void reverseArray(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;     
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){

    int n;
    cout << "Enter your array size: ";
    cin>>n;
    
    int arr[n];

    cout<<"Enter your array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout<<"Reversed array: ";
    reverseArray(arr, 0, n-1);

    printArray(arr, n);

    return 0;
}