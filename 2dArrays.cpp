
//2D ARRAY
//1.
// #include <iostream>
// using namespace std;
// void print2Darray(int arr[][4],int r,int c){
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     //initialise
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,1,1,2}
//     };
//     int r=3;
//     int c=4;
//     print2Darray(arr,r,c);
//     return 0;
// }

///2.PRINTING COLUMN WISE
// #include <iostream>
// using namespace std;
// void printColumnwise(int arr[][4],int r,int c){
// for(int i=0;i<c;i++){
//     for(int j=0;j<r;j++){
//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     //initialise
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,1,1,2}
//     };
//     int r=3;
//     int c=4;
//     printColumnwise(arr,r,c);
//     return 0;
// }

//3.TAKING INPUT ROW WISE AND THEN PRINTING IT
// #include<iostream>
// using namespace std;
// int main(){
// int arr[3][3];
// int r=3;
//  int c=3;
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cout<<"enter the input for row index:"<<i<<"column index:"<<j<< endl;
//         cin>>arr[i][j];
//     }
// }
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cout<<arr[i][j]<< " ";
//     }
//     cout<<endl;
// }
// return 0;
// }


//FINDING ELEMENTS IN 2D ARRAY
// #include<iostream>
// using namespace std;
// bool  printTargetelements(int arr[][4],int r,int c,int target){
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//    if(arr[i][j]==target){
// return true;
// }
// }
// }
// return false;
// }
// int main(){
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,1,1,2}
//     };
//     int r=3;
//     int c=4;
//     int target=1;
//     printTargetelements(arr,r,c,target);
// cout<<"Target found or not: "<<printTargetelements(arr,r,c,target)<<endl;
//     return 0;
//}


//FINDING MAXIMUM or MINIMUM NUMBER IN THE ARRAY

//1.Max
// #include<iostream>
// #include<limits.h>
// using namespace std;

// int maxInArray(int arr[][4],int r,int c){
//        int maxNum=INT_MIN;
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
// if(arr[i][j]>maxNum){
// maxNum=arr[i][j];
// }
// }
// }
// return maxNum;
// } 
// int main(){
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,1,1,2}
//     };
//     int r=3;
//     int c=4;
//     int maxNum= maxInArray(arr,r,c);

// cout<<"The maximum number in the array is:-"<<maxNum<<endl;
//     return 0;
// }


//2.Min
// #include<iostream>
// #include<limits.h>
// using namespace std;

// int minInArray(int arr[][4],int r,int c){
//        int minNum=INT_MAX;
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
// if(arr[i][j]<minNum){
// minNum=arr[i][j];
// }
// }
// }
// return minNum;
// } 
// int main(){
//     int arr[3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,-1,1,2}
//     };
//     int r=3;
//     int c=4;
//     int minNum= minInArray(arr,r,c);

// cout<<"The minimum number in the array is:-"<<minNum<<endl;
//     return 0;
// }


//ROW WISE SUM OF THE ELEMENTS IN 2D ARRAY:
//normally
// #include <iostream>
// using namespace std;
// int main(){
// int arr[3][3]={
//     {1,0,0},
//     {2,0,0},
//     {3,0,0}
// };
// int r=3;
// int c=3;
// //  cout<<"enter inputs:"<<endl;
// // for (int i=0;i<r;i++){
// // for (int j=0;j<c;j++){
// //     cin>>arr[i][j];
// //calculate sum
// for(int i=0;i<r;i++){
//     int sum=0;
// for (int j=0;j<c;j++){
//     sum+=arr[i][j];
// }
// cout<<"Total sum of row"<< i+1<<"= "<<sum<<endl;
// }
// return 0;
// }
//using functions:=
// #include <iostream>
// using namespace std;
// void rowWiseSum(int arr[][3], int r, int c) {
//     for (int i = 0; i < r; i++) {  
//         int sum = 0;
//         for (int j = 0; j < c; j++) {  
//             sum += arr[i][j];
//         }
//         cout << "Sum of row " << i + 1 << " = " << sum << endl;
//     }
// }
// int main() {
//     int arr[3][3] = {  
//         {1, 2, 3},  
//         {4, 5, 6},  
//         {7, 8, 9}  
//     };
//     int r = 3, c = 3;
//     rowWiseSum(arr, r, c);
//     return 0;
// }



//TRANSPOSE OF A MATRIX

//1.using functions
// #include <iostream>
// using namespace std;
// void transpose(int arr[][3], int r, int c) {
//     for (int i = 0; i < r; i++) {  
//         for (int j = i+1; j < c; j++) {  
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
// }
// void printMatrix(int arr[][3], int r, int c) {
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int arr[3][3] = {  
//         {1, 2, 3},  
//         {4, 5, 6},  
//         {7, 8, 9}  
//     };
//     int r = 3, c = 3;
//     cout << "Original Matrix:" << endl;
//     printMatrix(arr, r, c);
//     transpose(arr, r, c);
//     cout << "Transpose of the matrix will be"<< endl;
//     printMatrix(arr, r, c);
//     return 0;
// }


//2.without functions
// #include <iostream>
// using namespace std;

// int main() {
//         int r = 3, c = 3;
//         int arr[3][3] = {  
//         {1, 2, 3},  
//         {4, 5, 6},  
//         {7, 8, 9}  
//     };
// //user input:-
//     // int r, c;
    
//     // cout << "Enter number of rows and columns: ";
//     // cin >> r >> c;

//     // int arr[r][c];

//     // cout << "Enter the elements of the matrix:" << endl;
//     // for (int i = 0; i < r; i++) {
//     //     for (int j = 0; j < c; j++) {
//     //         cin >> arr[i][j];
//     //     }
//     // }

//     cout << "Original Matrix:" << endl;
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Transposed Matrix:" << endl;
//     for (int j = 0; j < c; j++) {
//         for (int i = 0; i < r; i++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




//**VECTOR STL IN C++**:-
//---------------------------------------------------------------------------//
//BASIC ISSUE
// #include <iostream>
// using namespace std;
// void fun(int arr[],int n){
//     cout<< "array elements are:-"<<endl;;
//     for (int i=0;i<n;++i){
// cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     //static array allocation of array
//     //int arr[5]={1,2,3,4,5};

//     //dynamic
//     int n;
//     cout<< "Enter the number of elements:-"<<endl;
//     cin>>n;
//     int *arr=new int[n]; //each element would be 0, or garbage
//         cout<< "enter array elements:-"<<endl;
//     for (int i=0;i<n;++i){
//         int data;
//         cin >>data;
//         arr[i]=data;
//     }
//     //inserting more items in an array:
//     //arr[n]=80;
//     for(int i=0;i<10;++i){
//         arr[n+i]=80;
//     }
//     fun(arr,n);
// }
//----------------------------------------------------------------------------//
//RESOLVINNG THE BASIC ISSUE BY VECTOR STL
//no need to ask  from user about size
//just keep inserting the data
//1.HOW VECTOR WORKS?
//BASICS
// #include <iostream>
// #include <vector>
// using namespace std;
//1.
    //  void print(vector<int>v){
    //     int size=v.size();
    //     for(int i=0;i<size;i++){
    //         cout<<v[i]<<endl;
    //     }
    //  }
    //  int main(){
    //     vector<int>v;
    //     //insert
    //     v.push_back(1);
    //      v.push_back(2);
    //       v.push_back(3);
    //       print(v);
    //  }
//2.
// #include <iostream>
// #include <vector>
// using namespace std;
//      void print(vector<int>v){
//         int size=v.size();
//         for(int i=0;i<size;i++){
//             cout<<v[i]<<endl;
//         }
//      }
    //  int main(){
//         vector<int>v;
//         while(1){
//             int d;cin>>d;
//             v.push_back(d);
//             cout<<"capacity: "<<v.capacity()<<"size: "<<v.size()<<endl;
//         }

//      }

//syntaxing of vector:
    //1.
    //vector<int<vec; output=>nothing
    //2.
    //vector<int>vec={1,2,3}=>size=3
    //3.
    //vector<int>vec(3,0)==>size=3
//int main(){
    // vector<int>v={1,2,3};
    // cout<<v[0]<<endl; ;
//output:1
    // vector<int>v(5,0);
    // cout<<v[0]<<endl;
    //     cout<<v[1]<<endl; 
    //         cout<<v[2]<<endl;
    //             cout<<v[3]<<endl;
    //                 cout<<v[4]<<endl;
//output:
// 0
// 0
// 0
// 0
// 0
// vector<char>vec={'a','b','c','d','e'};
// for (char val: vec){
//     cout << val<<endl;
// }
//output:
// a
// b
// c
// d
// e

//     return 0;
// }

// TYPES OF FUNCTIONS IN VECTOR:
//size,push_back,pop_back,front,back,at
// #include <iostream>
// #include <vector>
// using namespace std;
//1.
// int main(){
//     vector<char>vec={'a','b','c','d','e'};
//     cout<<"size = "<<vec.size()<<endl;
//     for(char val:vec){
//         cout<<val<<endl;
//     }
//      return 0;
// }
//2.
//a.
// int main(){
//     vector<int>vec;
//     cout<<"size = "<<vec.size()<<endl;
//      vec.push_back(25);
//     cout<<"after push back size = "<<vec.size()<<endl;
//     for(int val:vec){
//         cout<<val<<endl;
//     }
//      return 0;
// }
//b.
// int main(){
//     vector<int>vec;
//     cout<<"size = "<<vec.size()<<endl;
//      vec.push_back(25);
//       vec.push_back(35);
//        vec.push_back(45);
//     cout<<"after push back size = "<<vec.size()<<endl;
//     for(int val:vec){
//         cout<<val<<endl;
//     }
//      return 0;
// }
//3.
// int main(){
//     vector<int>vec;
//     // cout<<"size = "<<vec.size()<<endl;
    //  vec.push_back(25);
    //   vec.push_back(35);
    //    vec.push_back(45);
//     // cout<<"after push back size = "<<vec.size()<<endl;
//         vec.pop_back();
//         vec.pop_back();
//     for(int val:vec){
//         cout<<val<<endl;
//     }
//      return 0;
// }
//4.
//     int main(){
//     vector<int>vec;
//      vec.push_back(25);
//       vec.push_back(35);
//        vec.push_back(45);
//     //   cout <<vec.back()<<endl;
//     //   cout<<vec.front()<<endl;
//       cout<<vec.at(2)<<endl;
//      return 0;
// }

//size and capacity concept
// #include <iostream>
// #include <vector>
// using namespace std;
//      void print(vector<int>v){
//         int size=v.size();
//         for(int i=0;i<size;i++){
//             cout<<v[i]<<endl;
//         }
//      }
//      int main(){
//         vector<int>v;
//         while(1){
//             int d;cin>>d;
//             v.push_back(d);
//             cout<<"capacity: "<<v.capacity()<<"size: "<<v.size()<<endl;
//         }

//      }
 

//PRACTICE
//1.SHIFT NEGATIVE ONE SIDE(2 POINTER METHOD)
// #include <iostream>
// using namespace std;
// void shiftNegatives(int arr[],int n){
//         int j=0;
//           for(int i=0;i<n;i++){
//             if(arr[i]<0){
//                 swap(arr[i],arr[j]);
//                 j++;
//             }
//         }

//     }
// int main(){
//         int arr[7]={-1,2,3,-5,-4,6,-8};
//         int n=7;
//      shiftNegatives(arr,n);
//         cout<<"prinnting the array:"<<endl;
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//     }

//SORT COLORS LEETCODE QUESTION NUMBER 75. 
// #include <iostream>
// using namespace std;
// void sortColors(int arr[], int n) {
//     int left = 0, mid = 0, right = n - 1;
//     while (mid <= right) {
//         if (arr[mid] == 0) {
//             swap(arr[left], arr[mid]);
//             left++;
//             mid++;
//         } 
//         else if (arr[mid] == 1) {
//             mid++;
//         } 
//         else { // arr[mid] == 2
//             swap(arr[mid], arr[right]);
//             right--;
//         }
//     }
// }
// int main() {
//     int n = 10;
//     int arr[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 2};
//     sortColors(arr, n);
//     cout << "Printing array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


//bubble sort
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10] = {0, 0, 2, 1, 1, 1, 0, 1, 0, 2};
//     int n = 10;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     cout << "array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


//Leetcode question number:189
//ROTATE THE ARRAY:-
//a.
// #include <iostream>
// using namespace std;
// void rotateArray(int arr[], int n,int k) {
//     int temp[n];
//       for(int i=0;i<n;i++){
//         int newindex=(i+k)%n;
//         temp[newindex]=arr[i];
//       }
//             for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//             }
//         }
//     int main(){
//     int n=10;
//     int k=2;
//     int arr[10] = {2,4,5,6,7,3,4,2,1,9};
//     rotateArray(arr, n,k);
//   cout << "Printing the rotated array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//b.LEETCODE SYNTAX:    
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> temp(n);
//         for (int i = 0; i < n; i++) {
//             int newIndex = (i + k) % n;
//             temp[newIndex] = nums[i];
//         }
//         nums = temp;
//     }
// };

//MISSING NUMBER QUESTIONS LEETCODE 268:
//Leetcode syntax:
//a.
// class solution;
// int missingNumber(vector<int>& nums){
//     int sum=0;
//     int n=nums.size();
//     for(int index=0;index<n;index++){
//         sum=sum+nums[index];
//     }
//     int totalsum=((n)*(n+1))/2;
//     int ans=totalsum-sum;
//     return ans;
// }
// };

//b.WITH INT RETURN
// #include <iostream>
// using namespace std;
// int missingNumber(int nums[], int n) {
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum += nums[i];
//     }
//     int totalSum = (n * (n + 1)) / 2;
//     int ans=totalSum-sum;
//     return ans;
// }
// int main() {
//     int nums[] = {3, 0, 1};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     int result = missingNumber(nums, n);
//     cout << "The missing number is: " << result << endl;
//     return 0;
// }

//C.WITH VOID 
// #include <iostream>
// using namespace std;
// void missingNumber(int nums[], int n) {
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum = sum+ nums[i];
//     }
//     int totalSum = (n * (n + 1)) / 2;
//     int ans = totalSum - sum;
//     cout << "The missing number is: " << ans << endl;
// }
// int main() {
//     int nums[] = {3, 0, 1};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     missingNumber(nums, n); 
//     return 0;
// }


//ROTATE THE 2D ARRAY BY 90 DEGREES
//VVVI
///leetcode syntax:
// class solution{
//     public:
//     void rotate(vector<vector<int>>&matrix){
//         int n=matrix.size();
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<matrix[i].size()){
//             swap(matrix[i][j],matrix[j][i]);
//         }
 
//     }
//     for(int i=0;i<n;i++){
//         reverse(matrix[i].begin(),matrix[i].end());
//     }
//     }
// };

//TRANSPOSE->REVERSE THE ROW

// #include <iostream>
// using namespace std;
// int n = 3;
// //s2
// void transpose(int matrix[][3]) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
// }
// //s3
// void reverseRows(int matrix[][3]) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n/ 2; j++) {
//             swap(matrix[i][j], matrix[i][n - 1 - j]);
//         }
//     }
// }
// void rotate90Clockwise(int matrix[][3]) {
//     transpose(matrix);
//     reverseRows(matrix);
// }
// //s4
// void printMatrix(int matrix[][3]) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// //s1
// int main() {
//       int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     rotate90Clockwise(matrix);
//     cout << "Rotated 90 degrees clockwise:\n";
//     printMatrix(matrix);
//     return 0;
// }