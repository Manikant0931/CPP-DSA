//what is an array?
//->list of similar items,collection of elements,data structure,continous memory block having specific properties..

//**ARRAYS**//
//creating an array
// #include <iostream>
// using namespace std;
// int main(){
//1..array creation 1st step
//     int arr[101];
//     char ch[102];
//     bool flags[103];
//     long num[900];
//     short snum[1000];
//     cout<<"array created  successfully"<<endl;
//     return 0;
// }


//2.
//finding the base adress 
// int a=5;
// cout <<  "adress of a is"<<&a<<endl;
// cout <<"value of a is "<<a<<endl;

// int arr[5];
// cout << "the base adress of the array will be "<<&arr<<endl;
// cout<<"the base adress of array will be"<<arr<<endl;
// return 0;
// }

//3.
//finding the size
// int a=5;
// cout <<  "size of a is "<<sizeof(a)<<endl;
// int arr[5];
// cout << "the size of the array will be "<<sizeof(arr)<<endl;
// return 0;
// }


//4.
///array initialisation AND PRINTING
//a.
// int arr[]={1,2,3,4,5,6};
// int arr[5]={1,2,3,4,5};
// int arr[5]={1,2};
// //!!!int arr[2]={1,2,3,4,5,6};  !!!//=>this will generete the excess elements array error
// //b.
// int arr[5]={5,8,9,12,13};
// cout << arr[0] <<endl;
// cout << arr[1] <<endl;
// cout << arr[2] <<endl;
// cout << arr[3] <<endl;
// cout << arr[4] <<endl;
// }
//c.
// int arr[50]={5,8,9,12,13};
// int n=5;
// for(int i=0;i<n;i++){
//     cout << arr[i]<<" ";
// }
// return 0;
// }

//d.TAKING INPUT FROM AN ARRAY AND PRINTING IT
// int arr[5];
// int n=5;
// for(int i=0;i<n;i++){
//     cout<<"Enter the value for the index"<< i << " ";
//     cin >> arr[i];
//     cout <<endl;
// }
// cout<<"the array will be:"<<endl;
// for(int i=0;i<n;i++){
//     cout << arr[i]<<" ";
// }
// return 0;
// }

//|--------------------------------------------------------|
//|VERY IMPORTANT CONCEPT(BTS OF ARRAY)                    |                 
//|           **FORMULA**  [HOW INDEXING WORK?]                                |
//|  arr[i]=value at(base adress+(data type size*index))   |
//|--------------------------------------------------------|


//PROBLEM STATEMENT:
//1.10size ka array banao
//2.take input in that array
//3.double up each value of that array
//the code....
// int arr[10];//size declared

// int n;
// int arr[n];
// cout<<"enter the number of elements"<<endl;
// cin >> n;
// //input lelo
// cout<<"enter inputs:"<<endl;
// for (int i=0;i<n;i++){
//     cin>>arr[i];
// }
// // }
// cout<<"printing after taking input"<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// //print
// cout << "printing after taking double:"<<endl;
// for(int i=0;i<n;i++){
//     cout<<2*arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }



//new problem statement.
// int n=2;
// int arr[n];
//  cout<<"enter inputs:"<<endl;
// for (int i=0;i<n;i++){
//     cin>>arr[i];
// }
// //calculate sum
// int sum=0;
// for(int i=0;i<n;i++){
//     sum+=arr[i];
// }
// cout<<"Total sum = "<<sum<<endl;
// return 0;
// }

//Linear search in an array:-
// int n=5;
// int arr[5]={6,7,8,9,10};
// int target=11;
// bool flag=0;
// for(int i=0;i<n;i++){
//     if(arr[i]==target){
//      flag=1;
//         break;
//     }
// }
// if(flag==1){
//     cout<<"target found";
// }
// else{
//     cout<<"target not found"<<endl;
// }
// return 0;
// }

//24MAY 22:48

//**ARRAYS AND FUNCTIONS**//
//linear search with the help of functions

// #include <iostream>
// using namespace std;
// bool linearsearch(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     int target=1;
//     bool ans=linearsearch(arr,size,target);
//     if(ans==1){
//         cout <<"target found";
//     }
//     else{
//         cout<<"target not found"<<endl;
//     }
//     return 0;
// }



//Finding zeroes and ones in an array using functions..
// #include <iostream>
// using namespace std;
// void CountZero(int arr[], int size){
//     int zeroCount=0;
//     int oneCount=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//         }
// cout<<"zeros count are:"<<zeroCount<<endl;
// cout<<"ones count are:"<<oneCount<<endl;
// }
// int main(){
//     int arr[10]={0,1,0,0,0,0,1,1,1,0};
//     int size=10;
//     CountZero(arr,size);
//     return 0;
// }


//MINIMUM NUMBER IN ARRAY
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int findminarray(int arr[], int size){
//     int minAns=INT_MAX;
//     for (int i=0;i<size;i++){
//         if(arr[i]<minAns){
//             minAns=arr[i];
//         }
//     }
//     return minAns;
// }
// int main(){
//     int arr[5]={5,2,4,3,5};
//     int size=5;
//     int min=findminarray(arr,size);
//     cout<<"the minimum number is "<<min<<endl;
//     return 0;
// }


//SECOND LARGETST NUMBER IN AN ARRAY:
//#include <climits>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int getSecondLargest(vector<int>& arr) {
//         int largest = INT_MIN;
//         int secondLargest = INT_MIN;
//         for (int i = 0; i < arr.size(); i++) {
//             if (arr[i] > largest) {
//                 secondLargest = largest;
//                 largest = arr[i];
//             } else if (arr[i] > secondLargest && arr[i] != largest) {
//                 secondLargest = arr[i];
//             }
//         }
//         return (secondLargest == INT_MIN) ? -1 : secondLargest;
//     }
// };

//MAXIMUM NUMBER IN AN ARRAY:-
// #include <iostream>
 //#include <limits.h>
// using namespace std;
// int findMaxArray(int arr[],int size){
//     int maxans=-1;
    //int maxans=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxans){
//             maxans=arr[i];
//         }
//     }
//     return maxans;
// }
// int main(){
//     int arr[5]={2,3,1,4,5};
//     int size=5;
//     int maxans=findMaxArray(arr,size);
//     cout<<"The maximum number in the array:"<<maxans<<endl;
// return 0;
// }




//REVERSE AN ARRAY******
// #include <iostream>
// using namespace std;
// void reverseArray(int arr[], int size){
//     int left=0, right=size-1;
//     while (left < right){  // Fix condition
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
        //By for loop
// int right=size-1;
// for(int left=0;left<right;){
//     swap(arr[left],arr[right]);
//     left++;
//     right--;
// }  
// }
// int main(){
//     int arr[6] = {1, 2, 1, 3, 5,6};
//     int size = 6;
//     reverseArray(arr, size);
//     // Printing the reversed array
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//EXTREME PRINT IN AN ARRAY:-
// #include <iostream>
// using namespace std;
// void extremePrint(int arr[],int size){  
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         if(left==right){
//             cout << arr[left] << endl;
//         }
//         else{
//         cout << arr[left] <<" ";
//         cout << arr[right] <<" ";
//         }
//         left++;
//         right--;
//     }
// }
// int main(){
//     int arr[5]={5,4,3,4,1};
//     int size=5;
//     extremePrint(arr,size);
// }

//FIND UNIQUE ELEMENTS:-
// #include <iostream>
// using namespace std;
// int getUnique(int arr[],int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans^=arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[5]={1,1,2,3,3};
//     int size=5;
//     int finalAns=getUnique(arr,size);
//     cout << "final answer is:-"<<finalAns<<endl;
//     return 0;
// }

//FIND PAIR OF THE ELEMENTS THOSE ARE NOT UNIQUE IN PAIR
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<arr[i]<<","<<arr[j]<<endl;;
//     }
// }
// }

//FIND PAIR OF THE ELEMENTS THOSE ARE UNIQUE IN PAIR
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20};
//     int n=2;
//     for(int i=0;i<n;i++){ //10//10//20
//     for(int j=i;j<n;j++){ //10//20//20
//         cout<<arr[i]<<","<<arr[j]<<endl;;

//     }
// }
// }


//3 PAIRS

//(a)UNIQUE:
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         for(int k=j;k<n;k++){
//         cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
//         }
//     }
// }
//}

//b.(NON UNIQUE)
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//     for(int k=0;k<n;k++){
//         cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
//         }
//     }
// }
// }



//SORTING THE ELEMENTS IN ARRAY:
// #include <iostream>
// using namespace std;
// void doSorting(int arr[],int size){
//  //STEP A:COUNT 0 AND 1
    //  int zerocount=0;
    //  int onecount=0;
    //  for(int i=0;i<size;i++){
    //     if(arr[i]==0){
    //         zerocount++;
    //     }
    //     if(arr[i]==1){
    //         onecount++;
    //     }
    // }

//method1:
//STEP B:PLACE ALL ZEROES FIRST
// int index=0;
// for(index=0;index<zerocount;index++){
//     arr[index]=0;
// }
//STEP C:PLACES ALL ONES
// for(int j=index;j<size;j++){
//     arr[j]=1;
// }
// }


// //method2:
//     //STEP B:PLACE ALL ZEROES FIRST
//     int index=0;
//     while(zerocount--){
//         arr[index]=0;
//         index++;
//     }
//     //STEP C:PLACE ONE'S THEN
//     while(onecount--){
//         arr[index]=1;
//         index++;
//     }
// }
// int main(){
//     int arr[11]={0,1,1,0,1,0};
//     int size=6;
//     doSorting(arr,size);
// //printing the array
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
// }



// //SHIFTING THE ELEMENT BY 1 POSITION
// #include <iostream>
// using namespace std;
// void doShifting(int arr[], int size){
// //step1:last wale element ko first place me dalo
//     int temp=arr[size-1];
// //step2:
//    //shift->arr[i]=arr[i-1]
//    for(int i=size-1;i>=1;i--){
//     arr[i]=arr[i-1];
//    }
//    //step3:copy temp into 0th index
//   // arr[0]=temp;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     doShifting(arr,size);
// //printing the array
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
// }


//SHIFTING THE ELEMENT BY 1 POSITION
#include <iostream>
using namespace std;
void doShifting(int arr[], int size){
//step1:last wale element ko first place me dalo
    int temp=arr[0];
//step2:
   //shift->arr[i]=arr[i+1]
   for(int i=0;i<size-1;i++){
    arr[i]=arr[i+1];
   }
   //step3:copy temp into last index
  arr[size-1]=temp;
}
int main(){
    int arr[7]={2,3,4,5,6,7,8};
    int size=7;
    doShifting(arr,size);
//printing the array
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
