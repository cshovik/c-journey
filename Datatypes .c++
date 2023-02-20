#include <iostream>
int main()
{ 
   int age = 10;
   double id = 45.00;
   char sec = 'A'; 
   std::string name="Bro";
   std::cout << "His name is "<< name<< "\n";
   std ::cout<< "His age is " << age << std:: endl;
   std:: cout<< "His sec is " << sec ;
   
   //we can use endl or '\n' for next line but '\n has less time complexity than endl
   
}

//method 2 - using names as std

#include <iostream>
using namespace  std;
int main()
{ 
   int age = 10;
   double id = 45.00;
   char sec = 'A'; 
   string name="Bro";
   cout << "His name is "<< name<< "\n";
   cout<< "His age is " << age <<  endl;
   cout<< "His sec is " << sec ;
}
