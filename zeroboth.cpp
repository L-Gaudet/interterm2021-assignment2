// zeroboth.cpp
#include <iostream>
using namespace std;

// sets both pass-by-reference variables to 0
void zeroBoth(int& num1, int& num2) {
  num1 = 0;
  num2 = 0;
}

int main() {
  // declare variables
  int userNum1;
  int userNum2;

  // promts and collects input from user
  cout << "enter an integer: ";
  cin >> userNum1;
  cout << "enter another integer: ";
  cin >> userNum2;

  // calls zero both on the numbers inputted by the user 
  zeroBoth(userNum1, userNum2);

  // outputs both numbers post function call
  cout << "userNum1: " << userNum1 << endl;
  cout << "userNum2: " << userNum2 << endl;

  return 0;
}
