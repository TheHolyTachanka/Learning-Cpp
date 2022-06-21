

#include <iostream>
#include <string>
using namespace std;

/*
Yea this is my first C++ program... hope i dont regret it

*/

int add(int firstNumber, int secondNumber) {
  return firstNumber + secondNumber;
}

int subtract(int firstNumber, int secondNumber) {
  return firstNumber - secondNumber;
}

int divide(int firstNumber, int secondNumber) {
  return firstNumber / secondNumber;
}

int multiply(int firstNumber, int secondNumber) {
  return firstNumber * secondNumber;
}

int modulus(int firstNumber, int secondNumber) {
  return firstNumber % secondNumber;
}

int main() {
  string type;
  cout << "Enter Operator type: \n 1:add \n 2:subtract \n 3:divide \n 4:multiply \n 5:modulus" << endl;
  cin >> type;
  int firstNumber;
  int secondNumber;
  cout << "Enter first number:" << endl;
  cin >> firstNumber;
  cout << "Enter second number:" << endl;
  cin >> secondNumber;
  if (type == "1") {
    cout << "Your number is:\t" << add(firstNumber, secondNumber) << endl;
  } else if (type == "2") {
    cout << "Your number is:\t" << subtract(firstNumber, secondNumber) << endl;
  } else if (type == "3") {
    cout << "Your number is:\t" << divide(firstNumber, secondNumber) << endl;
  } else if (type == "4") {
    cout << "Your number is:\t" << multipy(firstNumber, secondNumber) << endl;
  } else if (type=="5"){
    cout << "Your number is:\t" << modulus(firstNumber, secondNumber) <<endl;
  } else {
    cout << "Invalid operator" << endl;
  }
}
