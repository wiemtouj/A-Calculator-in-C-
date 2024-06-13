#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{


   double number1,number2;
   string operation;

   cout << "Enter first number: ";

   cin >> number1;

   cout << "Enter operation (+, -, *, /): ";

   cin >> operation;

   cout << "Enter second number: ";

   cin >> number2;

   if (operation == "+"){
        cout << number1 + number2;
   }

   else if (operation == "-"){
        cout << number1 - number2;
   }

   else if (operation == "*"){
        cout << number1 * number2;
   }

   else if (operation == "/"){
        cout << number1 / number2;
   }

   else {cout << "Not a recognize operation!";
   }


    return 0;
}
