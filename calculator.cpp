

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

int devide(int firstNumber, int secondNumber) {
  return firstNumber / secondNumber;
}

int multiple(int firstNumber, int secondNumber) {
  return firstNumber * secondNumber;
}

int main() {
  string type;
  cout << "Enter Operator type: \n 1:add \n 2:subtract \n 3:devide \n 4:multiple" << endl;
  cin >> type;
  int firstNumber;
  int secondNumber;
  cout << "Enter first number:" << endl;
  cin >> firstNumber;
  cout << "Enter second number:" << endl;
  cin >> secondNumber;
  if (type == "1") {
    cout << "You number is:" << add(firstNumber, secondNumber) << endl;
  } else if (type == "2") {
    cout << "You number is:" << subtract(firstNumber, secondNumber) << endl;
  } else if (type == "3") {
    cout << "You number is:" << devide(firstNumber, secondNumber) << endl;
  } else if (type == "4") {
    cout << "You number is:" << multiple(firstNumber, secondNumber) << endl;
  } else {
    cout << "Invalid operator" << endl;
  }
};


