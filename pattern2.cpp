// TWO BONUS QUESTIONS:-
// 1.
// #include <iostream>
// using namespace std;
// int main() {
// int n=10;
// if (cout <<n){
//     cout << "love babbar";
// }
// cout << endl;
// }
// output==>10love babbar


// 2.
// #include <iostream>
// using namespace std;
// int main() {
// int n;
// if (cin >> n){
//     cout << "love babbar";
// }
// cout << endl;
// }
// output==>kuchh nhi

// PATTERN FULL PYRAMID
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i=0;i<5;i++){
//         //SPACE
//         for (int j=0;j<5-i-1;j++){
//             cout << " ";
//         }
//         //STARS
//         for (int j=0;j<i+1;j++){
//             cout << "* ";
//         }
//         cout << endl;

//     }
//     return 0;
// }

// 
// INVERSE PYRAMID
// PATTERN 
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<5;i++){
//         // SPACE
//         for (int j=0;j<i;j++){
//             cout << " ";
//         }
//            // stars
//            for (int j=0;j<5-i;j++){
//             cout << "* ";
//         }
//         cout << endl;
// }
// return 0;
// }

// PATEERN PRINTING
// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cin >> m;
//     int n=m/2;
// for (int i=0;i<n;i++) {
// for (int j=0;j<n-i-1;j++){
//  cout << " ";
// }
// for (int j=0;j<i+1;j++){
//     cout <<"* ";
// }
// cout << endl;
// }
// for (int i=0;i<n;i++){
//     for (int j=0;j<i;j++){
//         cout << " ";    
//     }
//     for (int j=0;j<n-i;j++){
//         cout << "* ";
//     }
//     cout << endl;
// }
// }


// PATTERN PRINTING(holllow pyramid)
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<4;i++){
// for (int j=0;j<4-i-1;j++){
//     cout << " ";
// }
// for (int j=0;j<i+1;j++){
// if (j==0 || j==i+1-1){
//     cout << "* ";
// }
//     else{
//         cout << "  ";
//     }
// }
    
// cout << endl;
// }
// }

// PATTERN PRINTING [hollow reversed pyramid]
// #include <iostream>
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 0; i < 5; i++) {
//         // Spaces
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         // Stars
//         for (int j = 0; j < (5 - i); j++) {
//             if ((j == 0) || (j == (5 - i) - 1)) {
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }


// other way
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 0; i < n; i++) {
//         // Spaces
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         // Stars and hollow part
//         for (int j = 0; j < (2 * n) - (2 * i) - 1; j++) {
//             if (j == 0 || j == (2 * n) - (2 * i) - 2) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// FILLED DIAMOND
// METHOD 1:-
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << "  ";
//         }
//         for (int j = 0; j < 2 * i + 1; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << "  ";
//         }
//         for (int j = 0; j < 2 * (n - i - 1) - 1; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// METHOD 2:-
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i=0;i<5;i++){
//         //SPACE
//         for (int j=0;j<5-i-1;j++){
//             cout << " ";
//         }
//         //STARS
//         for (int j=0;j<i+1;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i=0;i<5;i++){
//                 // SPACE
//                 for (int j=0;j<i;j++){
//                     cout << " ";
//                 }
//                    // stars
//                    for (int j=0;j<5-i;j++){
//                     cout << "* ";
//                 }
//                 cout << endl;
//         }
//         return 0;
//         }




// HOLLOW PYRAMID
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i=0;i<5;i++){
//         //SPACE
//         for (int j=0;j<5-i-1;j++){
//             cout << " ";
//         }
//         //STARS
//         for (int j=0;j<i+1;j++){
//             if (j==0 || j==i+1-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     for (int i=0;i<5;i++){
//                 // SPACE
//                 for (int j=0;j<i;j++){
//                     cout << " ";
//                 }
//                    // stars
//                    for (int j=0;j<5-i;j++){
//                     if (j==0 || j==5-i-1){
//                         cout << "* ";
//                     }
//                     else{
//                         cout << "  ";
//                     }
//                 }
//                 cout << endl;
//         }
//         return 0;
//         }




// PATTERN PRINTING EXTREME
// #include <iostream>
// using namespace std;
// int main() {
//    for (int i=0;i<5;i++){
//     //inverted pyramid1
//     for (int j=0;j<5-i;j++){
//         cout << "*";
//     }
//     //full pyramid 1
//     for (int j=0;j<2*i+1;j++){
//         cout << " ";
//     }
//     //inverted pyramid 2
//     for (int j=0;j<5-i;j++){
//         cout << "*";
//     }
// cout << endl;
//    }
//    for (int i=0;i<5;i++){
//     //inverted pyramid1
//     for (int j=0;j<i+1;j++){
//         cout << "*";
//     }
//     //full pyramid 1
//     for (int j=0;j<2*5-2*i-1;j++){
//         cout << " ";
//     }
//     //inverted pyramid 2
//     for (int j=0;j<i+1;j++){
//         cout << "*";
//     }
//     cout << endl;
// }

//    return 0;
// }




//PATTERN PERINTING
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//    for(int i=0;i<n;i++){
//     for (int j=0;j<2*i+1;j++){
//     if(j%2!=0){
//         cout << "*";
//     }
//     else{
//         cout <<i+1;
//     }
// }
//    cout << endl;
// }
// return 0;
// }



// ----------------********--------********--------------*******---------------******---------------  //
//1:18:00 paused
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num = i;
        for (int j = 0; j <= n - i; j++) {
            cout << num << " ";
            num += (n - j);
        }
        cout << endl;
    }
    return 0;
}
