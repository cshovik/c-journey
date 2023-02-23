#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

int main(){
 
 int rows;
 int coloumns;
 char symbol;

 std::cout<< "Enter number of rows ";
 std::cin >> rows;

 std::cout<< "Enter number of coloumns";
 std::cin >> coloumns;

 std::cout <<"Enter a symbol to use: ";
 std::cin >> symbol;

 for(int i= 1; i<=rows; i++){
   for(int j=1; j<=coloumns ; j++){
       std::cout << symbol;
 }
    std::cout<<'\n';
 }
 
  return 0;
}
