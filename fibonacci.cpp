#include <iostream>
#include "fibonacci.h"

long long fibonacci(long long n){
  if (n <=1){//hello world
    return n;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}
