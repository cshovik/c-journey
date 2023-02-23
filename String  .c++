#include <bits/stdc++.h>
#include <iostream>
#include<cmath>


int main(){
  std::string name;

  std::cout<< "Enter your name: ";
  std::getline(std::cin,name);

  if(name.length() >12){
    std::cout<< "Your name can't be 12 character";
  }
  else{
    std::cout << "Welcome " << name;
  }
  

  return 0;
}


// Empty method- The isEmpty () method checks whether a string is empty or not. This method returns true if the string is empty (length () is 0), and false if not.
#include <bits/stdc++.h>
#include <iostream>
#include<cmath>



int main(){
  std::string name;

  std::cout<< "Enter your name: ";
  std::getline(std::cin,name);

  if(name.empty()){
    std::cout<< "You didn't enter your name";
  }
  else{
    std::cout << "Hello " << name;
  }


  return 0;
}

// clear method

#include <bits/stdc++.h>
#include <iostream>
#include<cmath>



int main(){
  std::string name;

  std::cout<< "Enter your name: ";
  std::getline(std::cin,name);

  name.clear();

  std::cout << "Hello" << name; //output- Hello
                                // here name is cleared


  return 0;
}

//apppend- to connect two string

#include <bits/stdc++.h>
#include <iostream>
#include<cmath>



int main(){
  std::string name;

  std::cout<< "Enter your name: ";
  std::getline(std::cin,name);

  name.append("@gmail.com");

  std::cout << "Uour username is now " << name;
  
  std::cout << name.at(1); //indexing
  
  name.insert (0 , "@");//insterting
  std::cout << name;

  std::cout <<  name.find(' '); //find whitespace
  
  name.erase(0,3);
  std::cout << name;

  return 0;
}
