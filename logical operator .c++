#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

// && = (and)check if two condition are true
// ||= (or)check if at least one of two condition is true
// ! = (not)reserves the logical states of its operand

int main(){
  
  int temp;
  bool sunny = true;

  std::cout << "Enter the temperature: ";
  std::cin>> temp;
  
  if(temp > 0 && temp < 30){
      std::cout << "The temp is good!";
  }
  else{
      std::cout << "The temperature is bad ";
  }
  if(!sunny){ //!sunny means sunny = false and sunny means sunny = true
     std::cout << "It is cloudy outside!";

  }else{
   std::cout<< "it is suuny outside";
  }

   return  0;


}
