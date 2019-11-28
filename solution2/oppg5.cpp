#include <iostream>
using namespace std;
int main() {
  double number;
  double *peker = &number;
  double &referanse = number;

  number = 1;
  cout << number << endl;
  *peker = 2;
  cout << number << endl;
  referanse = 3;
  cout << number << endl;
}