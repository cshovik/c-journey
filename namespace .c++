#include <iostream>

//Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name . A namespace allows
              //for identically named entities as long as the namespace are diffferent.

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    int x = 0;
    std:: cout << x; //output-0
    std:: cout << first::x; //output-1
    std:: cout << second::x; //output-2

}
