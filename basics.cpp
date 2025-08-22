//BASICS
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int x;
//     int y;
//     cin >> x >> y;
//     cout << "Value of x: " << x << “ and y: “ <<y;
//     return 0;
// }

//if-else
// #include <iostream>

// int main() {
//     int marks = 54;
//     char grade;

//     if (marks < 25) {
//         grade = 'F';
//     } else if (marks <= 44) {
//         grade = 'E';
//     } else if (marks <= 49) {
//         grade = 'D';
//     } else if (marks <= 59) {
//         grade = 'C';
//     } else if (marks <= 69) {
//         grade = 'B';
//     } else if (marks >= 70) {
//         grade = 'A';
//     } else {
//         grade = 'X'; // Use 'X' to indicate invalid marks
//     }

//     std::cout << "Grade: " << grade << std::endl;
    
//     return 0;
// }

//SWITCH  CASE
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 2;
//     int y = 3;

//     switch (x) {
//         case 1:
//             cout << "x is 1." << endl;
//             switch (y) {
//                 case 1:
//                     cout << "y is 1." << endl;
//                     break;
//                 default:
//                     cout << "y is not 1." << endl;
//             }
//             break;
//         default:
//             cout << "x is not 1." << endl;
//     }

//     return 0;
// }


//FOR LOOPS
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 25; i += 5) {
//         cout << "i = " << i << endl;
//     }
//     return 0;
// }


//WHILE LOOPS
// #include <iostream>
// using namespace std;

// int main() {
//     int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int target = 6;

//     // Using 'break' to exit the loop early when the target is found
//     for (int num : numbers) {
//         if (num == target) {
//             cout << "Target found: " << target << endl;
//             break; // Exit the loop immediately
//         }
//         cout << "Checking: " << num << endl;
//     }

//     // Using 'continue' to skip specific elements
//     for (int num : numbers) {
//         if (num % 2 == 0) {
//             continue; // Skip even numbers
//         }
//         cout << "Odd number: " << num << endl;
//     }

//     return 0;
// }

