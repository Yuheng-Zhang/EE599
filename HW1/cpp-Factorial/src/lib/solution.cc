#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Factorial(int n) {
  if(n < 0) return -1;
  if(n == 0) return 1;
  int res = 1;
  while(n > 1 ) {
    res = res*n;
    n--;
  }
  return res;
}

int result=1 ;

int Solution::FactorialRecursive(int n) {
  if(n < 0) return -1;
  if(n == 0) return 1;
  if(n == 1) return 1;
  result = n * FactorialRecursive(n-1);
  return result;
}
