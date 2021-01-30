// conversion.cpp
#include <iostream>
#include <cmath>
using namespace std;

// gets input from user & returns 1 if user types 'exit'
int getInput(float& ForI) {
  string usrInput;
  cin >> usrInput;

  // checks if user wants to quit
  if (usrInput == "exit")
    return 1;
  else
    ForI = stof(usrInput);

  cout << endl;
  return 0;
}


// gets feet and inches into 1 value
void totalFeet(float& feet, float inches) {
  feet = feet + (inches / 12);
}

// converts feet to meters
void feetToMeters(float& meters, int feet) {
  meters = feet * 0.3048;
}

// takes the total meters value and seperates into meters and centimeters
void metersToCentimeters(float& meters, float& centimeters) {
  float leftovers = fmod(meters, 1);
  centimeters = leftovers * 100;
  meters -= leftovers;
}

// outputs results
void pushResults(float meters, float centimeters) {
  cout << meters << " meters and " << centimeters << " centimeters" << endl;
}

int main() {
  // declare variables
  float feet;
  float inches;
  float meters;
  float centimeters;

  // infinite loop until user enters 'exit'
  while (true) {
    cout << "enter number of feet: ";
    if (getInput(feet) == 1) { // getInput() will return 1 if the user enters 'exit'
      cout << endl;            // which will triger this and break the loop to
      break;                   // quit the program. If 'exit' not typed then the function grabs feet value
    }
    cout << "enter number of inches: ";
    if (getInput(inches) == 1) { // same as previous if statement except grabs inches value
      cout << endl;
      break;
    }

    // convert the values to meters and centimeters then output the results.
    totalFeet(feet, inches);
    feetToMeters(meters, feet);
    metersToCentimeters(meters, centimeters);
    pushResults(meters, centimeters);
    cout << endl;
  }

  // trigger once the user types 'exit'
  cout << "goodbye" << endl;
  cout << endl;

  return 0;
}
