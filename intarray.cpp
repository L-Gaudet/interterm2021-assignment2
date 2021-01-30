// intarray.cpp

#include <iostream>
using namespace std;

int main() {
  // declare variables and array
  int numberArray[10];
  int i;
  int num;

  // instructs user
  cout << "enter a non-negative integer, hit enter, repeat for a total of 10 times:" << endl;

  // collects inputs for each spot in the array
  for (i = 0; i < 10; ++i) {
    cin >> numberArray[i];
  }

  cout << endl;

  // outputs each value in the array 
  for (i = 0; i < 10; ++i) {
    cout << numberArray[i] << endl;
  }

  return 0;
}
