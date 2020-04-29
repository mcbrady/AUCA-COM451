// compile as g++ hello.cpp -std=c++11

#include <stdio.h>
#include <thread>

//comment for zara

int main(void){

  unsigned int numCores = std::thread::hardware_concurrency();

  printf("num CPU cores on this machine: %d\n", numCores);

  return 0;
}
