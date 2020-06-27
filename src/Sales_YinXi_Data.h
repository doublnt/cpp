#ifndef SALES_YINXI_DATA_H
#define SALES_YINXI_DATA_H
#include <string>

struct Sales_Data_YinXi {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  Sales_Data_YinXi& combine(const Sales_Data_YinXi&);
  std::string isbn() const { return bookNo; }
};
#endif  // !SALES_YINXI_DATA_H
