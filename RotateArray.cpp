//Let's wirte a function roate(arr[],d,n) that rotates arr[] of size n by d elements.

// where d = no of rotation , n = no of elements

/* 
Method 1 (using temp array)

Input arr[] = [1,2,3,4,5,6,7,8,9] , d = 2, and n=9
1) store the first d elements in a temp array

    temp[] = [1,2]

2) Shift rest of the arr[]

    arr[]={3,4,5,6,7,8,9,8,9}

3) Store back the d elemets 

    arr[] = [3,4,5,6,7,8,9,1,2]

Time complexity : O(n)  ''as it iterates thorugh the array n times ''

Auxiliary Space: O(d)   '' array has fixed space ''

*/

/*
 Method 2(rotate by one)
  
leftRotate(arr[],d,n)
start
For i=0 to i<d
    Left rotate all elements of arr[] by one
end

To rotate by one, store arr[0] in temporary variable temp, move arr[1] to arr[0],arr[2] to arr[1]... and finally temp to arr[n-1]
Let us take the same example arr[] = {1,2,3,4,5,6,7,8,9}, d=2
Rotate arr[] by 2 times
We get[2,3,4,5,6,7,8,9,1] after first roatation and [3,4,5,6,7,8,9,1,2] after second rotation



*/


//Method 2

#include<bits/stdc++.h>
using namespace std;

//function to left rotate arr[] of size n by 1 
void leftRotatebyone(int arr[],int n )
{
    int temp= arr[0], i;   //arr[0] is stored in temp variable and integer i is declared
    for(i=0;i<n-1;i++)     // for loop till second last element
        arr[i] =arr[i+1]; // shifting the array by 1

    arr[n-1] = temp; // store second last element in temp
}

//function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
    leftRotatebyone(arr, n);
}

// utility function to print array

void printArray (int arr[] , int n)
{
    for(int i=0; i<n ;i++)
    cout<<arr[i]<< " "<<endl; // print array from i = 0 to i < n
}

// Driver program to print above functions

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,2,n);
    printArray(arr,n);

    return 0;
}
