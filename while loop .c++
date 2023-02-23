//while loop

#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

int main(){
  int number;

  std::cout << "Enter a positive number ";
    std::cin >> number;

  while(number < 0){
    std::cout << "Enter a positive number ";
    std::cin >> number;
  }
  
  std::cout << "this # is: "<< number;

  return 0;
}

//do while loop

#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

int main(){
  int number;

  do{std::cout << "Enter a positive number ";
    std::cin >> number;
  }while(number <0);


  
  std::cout << "this # is: "<< number;

  return 0;
}
