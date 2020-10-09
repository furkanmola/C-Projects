#include <iostream>
#include "PointerEx.h"

int main() {
  PointerEx ptr;
  int a = 5;
  int b = 10;
  
  std::cout << "Before swap() a = " << a << ", b = " << b << "\n";
  
  ptr.swap(&a, &b);
  
  std::cout << "After swap() a = " << a << ", b = " << b << "\n";
  
}
