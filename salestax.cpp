#include <iostream>
using namespace std;

// calculates the item cost with tax included
float addTax(float taxRate, float cost) { // V converts tax percent to decimal
  float totalCost = cost + (cost * (taxRate / 100));
  return totalCost;
}

int main() {
  // declare variables
  float taxPercent;
  float itemCost;

  // prompt and collect input from user
  cout << "enter the cost of the item: ";
  cin >> itemCost;
  cout << "enter the tax rate percent: ";
  cin >> taxPercent;

  // call function and output results
  cout << "total cost including tax: $" << addTax(taxPercent, itemCost) << endl;


  return 0;
}
