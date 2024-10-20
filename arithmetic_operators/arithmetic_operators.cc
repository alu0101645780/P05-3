/*Escriba un programa arithmetic_operators.cc que declare e inicialice variables de tipos aritméticos e imprima en pantalla el resultado de operar esas variables con todos los operadores que pueda utilizar con ellas. Utilice operadores aritméticos y de comparación.*/

#include<iostream>
using namespace std;

int main() {

  int a{3}, b{7};
  float c{4.35}, d{4.35};
  double e{2.964928457948597247285284}, f{4.83092328939804932403508332};
  bool igual1 = (a == b),igual2 = (c == d),igual3 = (e == f), distinto1 = (a != b), distinto2 = (c != d), distinto3 = (e != f), mayor1 = (a > b), mayor2 = (c > d), mayor3 = (e > f), menor1 = (a < b),
  menor2 = (c < d), menor3 = (e < f), mayor_ig1 = (a >= b), mayor_ig2 = (c >= d), mayor_ig3 = (e >= f), menor_ig1 = (a <= b), menor_ig2 = (c <= d), menor_ig3 = (e <= f);  

  cout << endl;
  cout << " ==== OPERACIONES ARITMÉTICAS ==== " << endl;
  cout << " " << a << " + " << b << " = " << a + b << endl; 
  cout << " " << a << " - " << b << " = " << a - b << endl; 
  cout << " " << a << " * " << b << " = " << a * b << endl;
  cout << " " << a << " / " << b << " = " << a / b << endl;
  cout << " " << a << " % " << b << " = " << a % b << endl;
  cout << " " << a << "++ " << " = " << a++ << endl;
  cout << " " << a << "-- " << " = " << a-- << endl;

  cout << " ---------------------------- " << endl;
  cout << " " << c << " + " << d << " = " << c + d << endl;
  cout << " " << c << " - " << d << " = " << c - d << endl;
  cout << " " << c << " * " << d << " = " << c * d << endl;
  cout << " " << c << " / " << d << " = " << c / d << endl;

  cout << " ---------------------------- " << endl;
  cout << " " << e << " + " << f << " = " << e + f << endl;
  cout << " " << e << " - " << f << " = " << e - f << endl;
  cout << " " << e << " * " << f << " = " << e * f << endl;
  cout << " " << e << " / " << f << " = " << e / f << endl;

  cout << endl;
  cout << " ==== OPERACIONES DE COMPARACIÓN ==== " << endl;
  cout << " " << a << " == " << b << " ? = " << igual1 << endl;
  cout << " " << a << " != " << b << " ? = " << distinto1 << endl;
  cout << " " << a << " > " << b << " ? = " << mayor1 << endl;
  cout << " " << a << " < " << b << " ? = " << menor1 << endl;
  cout << " " << a << " >= " << b << " ? = " << mayor_ig1 << endl;
  cout << " " << a << " <= " << b << " ? = " << menor_ig1 << endl;

  cout << " ---------------------------- " << endl;
  cout << " " << c << " == " << d << " ? = " << igual2 << endl;
  cout << " " << c << " != " << d << " ? = " << distinto2 << endl;
  cout << " " << c << " > " << d << " ? = " << mayor2 << endl;
  cout << " " << c << " < " << d << " ? = " << menor2 << endl;
  cout << " " << c << " >= " << d << " ? = " << mayor_ig2 << endl;
  cout << " " << c << " <= " << d << " ? = " << menor_ig2 << endl;

  cout << " ---------------------------- " << endl;
  cout << " " << e << " == " << f << " ? = " << igual3 << endl;
  cout << " " << e << " != " << f << " ? = " << distinto3 << endl;
  cout << " " << e << " > " << f << " ? = " << mayor3 << endl;
  cout << " " << e << " < " << f << " ? = " << menor3 << endl;
  cout << " " << e << " >= " << f << " ? = " << mayor_ig3 << endl;
  cout << " " << e << " <= " << f << " ? = " << menor_ig3 << endl;

  cout << endl;
  return 0;
}
