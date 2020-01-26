#include "solution.h"
#include <iostream>
int Solution::FindMax(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  int result = INT32_MIN;
  for (auto n : inputs) {
    if (n > result) {
      result = n;
    }
  }
  return result;
}

float Solution::FindMedian(std::vector<int> &inputs) {
  if(inputs.size()==0) {
    return -1;
  }
  float res = 0;
  if(inputs.size()%2 == 1) {
    return inputs[inputs.size()/2];
  }
  if(inputs.size()%2 == 0) {
    return (inputs[inputs.size()/2] + inputs[inputs.size()/2-1])/2.0;
  }
}
