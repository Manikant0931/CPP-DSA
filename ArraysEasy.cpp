//STRIVER EASY:
//1.largest  element in an array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={1,2,3,4,5,6,7,8,9,10};
// int largest=arr[0];
// for(int i=1;i<10;i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
// }
//    cout<<largest;
// }
//2.second largest element in an array without sorting
//a.BRUTE FORCE
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     if(n==0 || n==1)
//     cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
//     sort(arr,arr+n);
//     //int small=arr[1];
//     int large=arr[n-2];
//     //cout<<"Second smallest is "<<small<<endl;
//     cout<<"Second largest is "<<large<<endl;
// }

//b.OPTIMAL APPROACH
// #include <iostream>
// #include <climits>
// using namespace std;
// void findSecondSmallestAndLargest(int arr[], int size) {
//     // if (size < 2) {
//     //     cout << "Array must contain at least two elements." << endl;
//     //     return;
//     // }
//     int smallest = INT_MAX;
//     int secondSmallest = INT_MAX;
//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;
//     for (int i = 0; i < size; ++i) {
//         int current = arr[i];
//         if (current < smallest) {
//             smallest = current;
//         } else if (current > smallest && current < secondSmallest) {
//             secondSmallest = current;
//         }
//         if (current > largest) {
//             largest = current;
//         } else if (current < largest && current > secondLargest) {
//             secondLargest = current;
//         }
    
//     }
//         cout << "Second Smallest Element: " << secondSmallest << endl;
//         cout << "Second Largest Element: " << secondLargest << endl;  
// }
// int main() {
//     int numbers[] = {12, 35, 1, 10, 34, 1};
//     int length = sizeof(numbers) / sizeof(numbers[0]);
//     findSecondSmallestAndLargest(numbers, length);
//     return 0;
// }

//Q.Check that array is sorted or not?
//a.BRUTE FORCE
// #include <iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int arr[]={1,2,4,6,5,3};
//       for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] < arr[i])
//         return false;
//     }
//   }

//   return true;
// }

//ROTATE THE ELEMENT IN THE ARRAY BT THE D PLACES
#include <bits/stdc++.h>
using namespace std;
// void reverse(int arr[],int start, int end){
//     while(start<=end){
//         int temp=arr[start];
//         arr[start]=arr=[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }
void leftRotate(int arr[], int n, int d) {
    reverse(arr, arr + d);     
    reverse(arr + d, arr + n);   
    reverse(arr, arr + n);      
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
