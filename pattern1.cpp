//basics before pattern printing
// #include <iostream>
// using namespace std;
// int main(){

//              //if statement
// int n=10;
// if(n<0){
//     cout<<"statement inside of if block"<<endl;
// }
//   cout<<"statement outside of if block"<<endl;
//   return 0;
// }


//              //if  else statement
// int n=10;
// if(n<0){
//     cout<<"statement inside of if block"<<endl;
// }
// else{
//   cout<<"statement inside of else block"<<endl;
// }
// cout<<"statement outside of if-else block"<<endl;
//   return 0;
// }


//              //if  else statement
// int n=10;
// if(n<0){
//     cout<<"statement inside of if block"<<endl;
// }
// else if(n>0){
//   cout<<"statement inside of if else block"<<endl;
// }
// else if(n==0){cout<<"statement inside of if else block"<<endl;
// }
// else{
//     cout<<"statement inside of else block"<<endl;
// }
// cout<<"statement outside of if else if block"<<endl;
//   return 0;
// }

//              //nested if statement
// int n=10;
// if(n<0){
// if(n>0){
//   cout<<"statement inside of nested if block"<<endl;
// }
// else{
//     cout<<"statement inside of nested else block"<<endl;
// }
//  cout<<"statement inside of if block"<<endl;
// }
// else{
//     cout<<"statement inside of else block"<<endl;
// }
// cout<<"statement outside of if else and nested if block"<<endl;
//   return 0;
// }


             //for loop
//     for(int i=0;i<5;i++){
//         cout<<"love you"<<endl;
//     }
//     return 0;
// }




// PATTERN PRINTING
//                // 1.SQUARE PRINTING
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 0; i < 4; i++) { //outer loop for rows
//         for (int j = 0; j < 4; j++) { //printing four stars
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// //2.RECTANGLE PRINTING
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0; i<3;i++){//outer loop
//         for (int j=0;j<5;j++){//printing the star with the inner loop
//             cout <<"* ";
//         }
//         cout << endl;
//     }
// }

// rule-1==outer loop always describes the ouiter loop.
// rule-2==inner loop always describes the inner loop majorlyu printing the stars in the basdic code.


// 3.printing the rectangle
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<3;i++){
//         for (int i=0;i<6;i++){
//             cout <<"* ";
//         }
//         cout << endl;
//     }
// }

//4.PATTERN PRINTING
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             if (i==0 || i==4){
//                 cout << "* ";
//             }
//             else{
//                 if(j==0 || j==4){
//                     cout << "* ";
//                 }
//                 else{
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }
// 5.pattern printing
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<8;i++){
//         for (int j=0;j<6;j++){
//         if (i==0 || i==7){
//             cout << "* ";
//         }
//         else{
//             if (j==0 || j==5){
//                 cout << "* ";
//             }else{
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

// // PATTERN PRINTING
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i=0;i<5;i++){
//         for (int j=0;j<i+1;j++){
//             cout << "* ";
//         }
//     cout << endl;
// }
// }

// PATTERN PRINTING
// #include <iostream>
// using namespace std;
// int main() {
// for (int i=0;i<5;i++){
//     for(int j=0;j<5-i;j++){
//         cout << "* ";
//     }
//     cout << endl;
// }
// }

// PATTERNM PRINTING
// #include <iostream>
// using namespace std;
// int main() {
// for (int i=0; i<4 ;i++){
//     for(int j=0; j<4-i; j++){
//         cout << "* ";    
// }

// cout << endl;
// }
// }


// PATTERNM PRINTING
// #include <iostream>
// using namespace std;
// int main() {
// for (int i=0; i<5 ;i++){
//     for(int j=0; j<i+1; j++){
    
//     cout << i+1 << " ";    ;    
// }

// cout << endl;
// }
// }


// PATTERNM PRINTING
// #include <iostream>
// using namespace std;
// int main() {
// for (int i=0; i<5 ;i++){
//     for(int j=0; j<5-i; j++){
    
//     cout << j+1 << " ";    ;    
// }

// cout << endl;
// }
// }

// PATTERNM PRINTING
// #include <iostream>
// using namespace std;
// int main() {
// for (int i=0; i<5 ;i++){
//     for(int j=0; j<i+1; j++){
    
//     cout << j+1 << " ";    ;    
// }

// cout << endl;
// }
// }

