#include "set.hpp"
#include <iostream>

Set::Set() {
  set = vector<int>();
}
Set::Set(const vector<int> &startSet) {
  set = startSet;
}
Set Set::operator+(const int integer) {
  bool exist = false;
  for (size_t i = 0; i < set.size(); i++) {
    if (set[i] == integer) {
      exist = true;
    }
  }
  if (!exist) {
    set.emplace_back(integer);
  }
  return *this;
}
Set Set::operator+=(const Set &other) {
  for (size_t i = 0; i < other.set.size(); i++) {
    bool found = false;
    for (size_t j = 0; j < set.size(); j++) {
      if (other.set[i] == set[j]) {
        found = true;
      }
    }
    if (!found) {
      set.emplace_back(other.set[i]);
    }
  }
  return *this;
}
Set Set::operator=(const Set &other) {
  set.clear();
  for (size_t i = 0; i < other.set.size(); i++) {
    set.emplace_back(other.set[i]);
  }
  return *this;
}
void Set::print() {
  cout << "{";
  for (size_t i = 0; i < set.size(); i++) {
    if (i != 0) {
      cout << ", ";
    }
    cout << set[i];
  }
  cout << "}" << endl;
}