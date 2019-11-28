#include <iostream>
using namespace std;

int size = 20;

int find_sum(const int *table, int length);

int main() {
  int table[size];
  for (int i = 1; i <= size; i++) {
    table[i] = i;
  }
  cout << "Summen av..." << endl;
  cout << "De 10 første tallene: " << find_sum(&table[1], 10) << endl;
  cout << "De 5 neste tallene:   " << find_sum(&table[11], 5) << endl;
  cout << "De 5 siste tallene:   " << find_sum(&table[size - 4], 5) << endl;
}

int find_sum(const int *table, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += table[i];
  }
  return sum;
}