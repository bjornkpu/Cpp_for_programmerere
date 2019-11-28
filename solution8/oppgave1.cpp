#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
  cout << "Template equal. a: " << a << ", b: " << b << endl;
  if (a == b) {
    return true;
  }
  return false;
}

bool equal(double a, double b) {
  setprecision(10);
  cout << "double equal. a: " << a << ", b: " << b << endl;
  double margin_of_error = 0.00001;

  if (abs(a - b) < margin_of_error) {
    return true;
  }
  return false;
}

int main() {
  double a = 1.1;
  double b = 1.1;
  double c = 1.00003;
  double d = 1.000034;

  // Like double
  cout << ((equal(a, b)) ? "=>" : "=> not") << " equal" << endl;

  // Ulike double
  cout << ((equal(b, c)) ? "=>" : "=> not") << " equal" << endl;

  // Ulike men like pga pressisjon
  cout << ((equal(c, d)) ? "=>" : "=> not") << " equal" << endl;

  // Tester template utgaven
  string str_a = "vi er like";
  string str_b = "vi er like";
  cout << ((equal(str_a, str_b)) ? "=>" : "=> not") << " equal" << endl;

  string str_c = "vi er";
  string str_d = "ikke like";
  cout << ((equal(str_c, str_d)) ? "=>" : "=> not") << " equal" << endl;
}
