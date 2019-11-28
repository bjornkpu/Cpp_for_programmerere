#pragma once
#include <vector>

using namespace std;

class Set {
public:
  Set();
  Set(const vector<int> &startSet);
  Set operator+=(const Set &other);
  Set operator+(const int integer);
  Set operator=(const Set &other);
  void print();

private:
  vector<int> set;
};