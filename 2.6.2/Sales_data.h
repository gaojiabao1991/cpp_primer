#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
  std::string isbn = "";
  unsigned int sold = 0;
  double revenue = 0;
};

#endif