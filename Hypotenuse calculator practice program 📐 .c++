#include <iostream>
#include <cmath>

// hypotenuse calculator c=root(a^2+b^2)
int main(){
   double a ,b,c;

   std:: cout<< "Enter side A: ";
   std::cin >>a;

   std:: cout<< "Enter side B: ";
   std::cin >>b;

   c = sqrt(pow(a,2) + pow(b,2));
   std::cout<< "Hypotenuse is: "<<c;

   return 0;


}
