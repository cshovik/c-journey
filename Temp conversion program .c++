 #include <bits/stdc++.h>
#include <iostream>
#include<cmath>


int main(){
  
  double temp;
  char unit;

  std:: cout << "********************** TEMPERATURE CONVERSION ******************* \n";
  std:: cout << "unit F = Farenheit \n";
  std:: cout << "unit C = Celsius\n";
  std:: cout << "What unit would you like to convert to: ";
  std::cin >> unit; 

  if(unit == 'F' || unit == 'f'){
    std::cout<<"Convert Celcius to Farenheit\n";
    std::cout << "Enter the temparature in Celcius: ";
    std::cin>> temp;

    temp = (1.8 * temp) +32.0;
    std::cout << "Temperature is: "<< temp<< "F\n";  
  }
  else if(unit == 'C' || unit== 'c'){
    std::cout<<"Convert Farenheit to Celcius\n";
    std::cout<< "Enter temperature in Farenheit: ";
    std:: cin>> temp;

    temp = (temp - 32) /1.8;
    std::cout << "Temperature is: "<< temp<<"C\n";

  }
  std::cout<<"*********************************************************************";


   return  0;


}
