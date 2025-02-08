#include<iostream>
#include<limits.h>
using namespace std;
void findSecondSmallestLargest(int arr[], int n) {
    
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
        
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    
    if (secondSmallest == INT_MAX)
        cout << "No second smallest element found." << endl;
    else
        cout << "Second Smallest: " << secondSmallest << endl;
    
    if (secondLargest == INT_MIN)
        cout << "No second largest element found." << endl;
    else
        cout << "Second Largest: " << secondLargest << endl;
}
int main(){
    int a;
    cout<<"enter the array size :";
    cin>>a;
    int arr[a];
   for(int r=0;r<=a;r++){
        cout<<"enter the integer no:"<<r<<" :\n";
        cin>>arr[r];
   }
   for(int r=0;r<=a;r++){
    cout<<"arr["<<r<<"] "<<arr[r]<<"\n";
   }
   for(int i=a;i>=0;i--){
    cout<<arr[i]<<" ";
   }
   cout<<"\n"
   findSecondSmallestLargest(arr,a);
    
    return 0;
}
