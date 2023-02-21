#include <iostream>

//cout << (insertion operator)
//cin>> (extraction operator)

int main(){
    
    std:: string name;
    std::string fullname;
    int age;

    std::cout <<"What's your name? "; //input- shovik chak
    std:: cin >> name; 

    std:: cout<<"What is your full name? "; //input-shovik chak
    std:: getline(std::cin >> std::ws,fullname);
       // getline helps to output two strings
       //ws bcz in getline it does't contain newline'\n' and connect whats your age and whats your full name in one single line. so whitespace is given.

    std:: cout <<"What's your age? ";
    std:: cin >> age ;

    std::cout << "Hello " << name <<'\n';  // output- shovik
    std:: cout<< "Your age is " << age<<'\n';
    std:: cout<< "Your full name is "<< fullname;  // output- shovik chak 


   return 0;


}
