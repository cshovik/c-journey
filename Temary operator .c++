#include <bits/stdc++.h>
#include <iostream>
#include<cmath>


int main(){

   int grade , num;
   std::cin>>grade;

   grade >=60 ? std::cout << "You pass" : std::cout<<"You fail";

   num % 2 ==0 ? std::cout <<"odd" : std::cout<<"fail";

   bool hungry = false;

   hungry?  std::cout<<"you are hungry" : std::cout<<"you are full";// for true not need to write true
   
   //or
   
   bool agree = false;
   std::cout<<(agree ? "you are agree" : "You are not agree");

   return  0;


}
