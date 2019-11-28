#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Opprett en vektor av double
  vector<double> numbers;
  numbers.emplace_back(4);
  numbers.emplace_back(8);
  numbers.emplace_back(3);

  // Prøv ut medlemsfunksjonene front() og back().
  cout << "front: " << numbers.front() << ", back: " << numbers.back() << endl;

  //Bruk emplace(
  numbers.emplace(numbers.begin() + 1, 6);
  cout << "front: " << numbers.front() << endl;

  // Prøv ut STL-algoritmen find()
  int searchValue = 6;
  if (find(numbers.begin(), numbers.end(), searchValue) != numbers.end()) {
    cout << "verdi funnet!" << endl;
  }
}