#ifndef SALES_YINXI_DATA_H
#define SALES_YINXI_DATA_H
#include <string>

struct Sales_Data_YinXi {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
#endif  // !SALES_YINXI_DATA_H
