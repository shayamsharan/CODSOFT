#include<iostream>
using namespace std;
float add(float num1, float num2)
{
  return num1 + num2;
}

float subtract(float num1, float num2)
{
  return
num1 - num2;
}

float multiply(float num1, float num2)
{
  return num1 * num2;
}

float divide(float num1, float num2)
{
  return num1 / num2;
}

int main() {
  float num1, num2;
  char operation;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  cout << "Select an operation (+, -, *, /): ";
  cin >> operation;

  float result;

  switch (operation) {
    case
 
'+':
      result = add(num1, num2);
      break;
    case
 
'-':
      result = subtract(num1, num2);
      break;
    case
 
'*':
      result = multiply(num1, num2);

      
break;
    case
 
'/':
      result = divide(num1, num2);
      break;
    default:
      cout << "Invalid operation." << endl;
      return 1;
  }

  cout << num1 << " " << operation << " " << num2 << " = " << result << endl;

  return 0;
}