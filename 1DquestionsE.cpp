//SECOND LARGEST ELEMENT
#include <iostream>
#include <limits.h>
using namespace std;
int getSL(int arr[],int size) {
    int l = INT_MIN; 
    int sL= INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > l)
            l = arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] > sL && arr[i] != l) {
            sL = arr[i];
        }
    }
    return sL;
}
int main() {
    int arr[6] = {12, 35, 1, 10, 34, 1};
    int size=6;
    int num=getSL(arr,size);
    cout << "Second largestt:"<<num;
    return 0;
}
//MOVE ALL ZEROES TO END
// #include <iostream>
// using namespace std;
// void pushZerosToEnd(int arr[],int size) {
//     int count = 0;
//     for (int i = 0; i <size; i++) {
//         if (arr[i] != 0) {
//             swap(arr[i], arr[count]);
//             count++;
//         }
//     }
// }
// int main() {
//     int arr[8] = {5, 2, 0, 4, 3, 0, 1, 0};
//     int size=8;
//     pushZerosToEnd(arr,size);
//       for (int i = 0; i <size; i++) {
//     cout << arr[i] << " ";
// }
//     return 0;
// }
//THIRD LARGEST
// #include <iostream>
// using namespace std;
// int getTL(int arr[],int size) {
//     int l = -1; 
//     int sL= -1;
//     int tL=-1;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > l)
//             l = arr[i];
//     }
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > sL && arr[i] != l) {
//             sL = arr[i];
//         }
//     }
//        for (int i = 0; i < size; i++) {
//         if (arr[i] > tL && arr[i] != l &&arr[i]!=sL) {
//             tL = arr[i];
//         }
//     }
//     return tL;
// }
// int main() {
//     int arr[6] = {12, 35, 1, 10, 34, 1};
//     int size=6;
//     int num=getTL(arr,size);
//     cout << "Third largest:"<<num;
//     return 0;
// }

//LARGEST
//#include <iostream>
// using namespace std;
// int getTL(int arr[],int size) {
//     int l = -1;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > l)
//             l = arr[i];
//     }
//    return l;
// }
// int main() {
//     int arr[6] = {12, 35, 1, 10, 34, 1};
//     int size=6;
//     int num=getL(arr,size);
//     cout << "largest:"<<num;
//     return 0;
// }

//REMOVE DUPLICATES FROM THE SORTED ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;
// int removeDuplicates(int arr[],int n) {
//     int idx = 1;
// for(int i=1;i<n;i++){
//     if(arr[i] != arr[i-1]){
//     arr[idx]=arr[i];
//     idx++;
// }
// }
//     return idx;
// }
// int main() {
//     int arr[9] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
//     int n=9;
//     int newSize = removeDuplicates(arr,n);
//     for (int i = 0; i < newSize; i++) 
//         cout << arr[i] << " ";
//     return 0;
// }