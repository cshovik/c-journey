#include <iostream>


int main(){
  int students = 20;
  students+=1;
  students -= 1;
  students ++;
  students *= 2;
  students /= 2;
  int remainder = students % 2;
   
  std::cout<< remainder;
  std::cout<< students;
   return 0;

}
