/*Programa que lee una letra mayúscula y la convierte a minúscula*/

#include<iostream>
using namespace std;


int main() {

  char letra_mayus;
  cin >> letra_mayus;

  cout << char(int(letra_mayus) - 32) << endl;

  return 0;
}
