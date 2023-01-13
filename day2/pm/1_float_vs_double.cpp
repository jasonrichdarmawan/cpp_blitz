#include <iostream>
using namespace std;
 
int main () {
  // the precision of float is only six or seven decimal digits
  float f1 = 35.12345678e8;
  // double variables have precision of about 15 digits
  double d1 = 12.12345678911234567E17;
  cout << fixed << f1 << "\n";
  cout << fixed << d1;
  return 0;
}
