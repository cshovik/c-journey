#include <iostream>


int main(){
   
   int age ;
   std::cout<<"Enter Your age: ";
   std::cin >> age;

   if(age >=18){
    std::cout << "Welcome to the site!";
   }
   else if(age<0){
    std::cout<<"You haven't been born yet!";
   }
   else{
    std::cout << "You atr mot old enough to enter!";
   }

   return 0;


}
