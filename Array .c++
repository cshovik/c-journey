#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

int main(){
 
   std::string cars[] = { "corvetter", "Mustang", "Camry"};
   
   cars[0] = "camaro";// change the value
   std::cout <<cars[0] << '\n';
   std::cout <<cars[1] << '\n';
   
   double prices[] = {5.00, 7.50 , 15.00};
   std::cout <<prices[0] <<'\n';
  return 0;
}

//method 2 - Writing style
#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

int main(){
 
  std::string cars[3];

  cars[0] = "camaro";
  cars[1] = "Mustang";
  cars[2] = "camry";

  return 0;
}
