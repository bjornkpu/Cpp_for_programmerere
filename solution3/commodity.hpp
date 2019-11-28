#pragma once
#include <string>
using namespace std;

const double sales_tax = 0.25; // fant denne ved å dele den forventede utskriften

class Commodity {
public:
  Commodity(string name, int id, double price);
  string get_name() const;
  int get_id() const;
  double get_price() const;
  double get_price(double) const;
  void set_price(double);
  double get_price_with_sales_tax(double) const;

private:
  string name;
  int id;
  double price;
};