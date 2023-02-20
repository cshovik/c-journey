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

// Diiferent type of datatypes in c++
#include <iostream>
int main(){


 //integer (Whole number)
 int age = 21;
 int year= 2023;
 int days = 7;

 //double (number including decimal)
 double price = 10.99;
 double gpa = 2.5;
 double temperature = 25.1;

 //single character
 char grade ='A';
 char initial = 'c';
 char currency = '&';
}

//boolean type(true or false)
bool student = false;
bool power = true;
bool forSale = true;

//string (object that represent a sequence of text)
std::string name ="Bro";
std:: string day = "friday";
std:: string food = "pizza";
