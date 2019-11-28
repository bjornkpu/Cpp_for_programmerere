#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
  for (auto &e : table)
    out << e << " ";
  return out;
}

int main() {
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  cout << "v1: " << v1 << endl;

  vector<int> v2 = {2, 3, 12, 14, 24};
  cout << "v2: " << v2 << endl;

  cout << endl
       << "oppgave a" << endl;
  // a: Finn første element i v1 som er større enn 15 ved hjelp av find_if.
  // Tips: Den logiske funksjonen skal ta ett argument og returnere true dersom dette er større enn 15.
  vector<int>::iterator it = find_if(v1.begin(), v1.end(), [](const int &e) {
    if (e > 15) {
      return true;
    }
    return false;
  });
  cout << "første element i v1 som er større enn 15 er: " << *it << endl;

  cout << endl
       << "oppgave b" << endl;
  // Vi definerer "omtrent lik" til å bety at forskjellen mellom to verdier ikke er mer enn 2.
  // Finn ut om intervallet [v1.begin(), v1.begin() + 5> og v2 er like i denne betydningen av likhet.
  // Hva med intervallet [v1.begin(), v1.begin() + 4>? Bruk algoritmen equal.
  bool equal_ish5 = equal(v1.begin(), v1.begin() + 5, v2.begin(), v2.begin() + 5, [](const int &e1, const int &e2) {
    if (abs(e1 - e2) <= 2) {
      return true;
    }
    return false;
  });
  cout << "v1 og v2 er " << ((equal_ish5) ? "" : "ikke ") << "lik i intervallet 0-5" << endl;

  bool equal_ish4 = equal(v1.begin(), v1.begin() + 4, v2.begin(), v2.begin() + 4, [](const int &e1, const int &e2) {
    if (abs(e1 - e2) <= 2) {
      return true;
    }
    return false;
  });
  cout << "v1 og v2 er " << ((equal_ish4) ? "" : "ikke ") << "lik i intervallet 0-4" << endl;

  cout << endl
       << "oppgave c" << endl;
  // Erstatt alle oddetall i v1 med 100 ved hjelp av replace_copy_if.
  // Eksemplet fra cplusspluss.com gav en fin IsOdd, bruker den in-line.
  replace_copy_if(
      v1.begin(), v1.end(), v1.begin(), [](const int i) { return ((i % 2) == 1); }, 100);
  cout << "new v1: " << v1 << endl;
}
