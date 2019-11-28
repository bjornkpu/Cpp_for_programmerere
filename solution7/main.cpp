#include "set.hpp"
#include <iostream>

using namespace std;

int main() {
  //Lage en ny, tom mengde
  Set set1;
  set1.print();

  //Finne unionen av to mengder
  vector<int> numbers1 = {1, 4, 3};
  vector<int> numbers2 = {4, 7};

  Set set2(numbers2);

  Set union_set(numbers1);
  union_set += set2;

  union_set.print();

  //Legge et nytt tall inn i en mengde
  union_set + 8;
  union_set.print();

  //Sette en mengde lik en annen mengde
  set1 = union_set;

  //Skrive ut en mengde
  set1.print();
}