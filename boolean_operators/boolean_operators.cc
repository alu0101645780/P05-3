/*Escriba un programa boolean_operators.cc que imprima en pantalla la tabla de verdad de los operadores lógicos (and, or, not) de C++. El programa deberá utilizar un par de variables booleanas y mostrar el resultado de operar ambas variables con todos sus posibles valores y con cada uno de los operadores lógicos.*/

#include<iostream>
using namespace std;

int main() {

  bool op1, op2;
  cin >> op1; 
  cin>> op2;
  cout << " ==== AND ==== " << endl;
  cout << " 0 and 0 = 0" << endl;
  cout << " 0 and 1 = 0" << endl;
  cout << " 1 and 0 = 0" << endl;
  cout << " 1 and 1 = 1" << endl;

  cout << " ==== OR ==== " << endl;
  cout << " 0 or 0 = 0" << endl;
  cout << " 0 or 1 = 1" << endl;
  cout << " 1 or 0 = 1" << endl;
  cout << " 1 or 1 = 1" << endl;

  cout << " ==== NOT ==== " << endl;
  cout << " not 0 = 1" << endl;
  cout << " not 1 = 0" << endl;

  cout << " ============= " << endl;
  cout << " " << op1 << " and " << op2 << " = "  << op1 * op2 << endl;
  if((op1 + op2 == 0) | op1 + op2 == 1) {
    cout << " " << op1 << " or " << op2 << " = " << op1 + op2 << endl;
  } else {
    cout << " " << op1 << " or " << op2 << " = 1" << endl;
    }
  cout << " not " <<  op1  << " = " << not op1  << endl;
  cout << " not " <<  op2  << " = " << not op2 << endl;

  return 0;
}
