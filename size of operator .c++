#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

//size () = determixes the size in bytes of a :
            //variable, data type, class,objects, etc.
int main(){
 
 double gpa = 2.5;
 std::string name = "shovik chakraborty";
 char grades[] = {'a', 'b', 'c','d'};

 std::cout << sizeof(gpa) << " bytes\n";
 
 std::cout << sizeof(name) << " bytes\n";
 
 std::cout << sizeof(grades) << " bytes\n";

 std::cout << sizeof(grades)/sizeof(char) << " elements\n";

 std::string students[] = {"spngbea", "shovik","shantu"};
  std::cout << sizeof(students)/sizeof(std::string) << " elements\n";


 return 0;
}
