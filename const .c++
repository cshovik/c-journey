// const fixed the value , so that anycone cannot change the calue it is only read view for them

#include <iostream>
int main(){

const double PI = 3.12159;
const int LIGHT_SPEED = 29990;
const int width = 123;
 

return 0;
}

#define also used as a const
//Macros are pieces of code in a program that is given some name. Whenever this name is encountered by the compiler, the compiler replaces 
//the name with the actual piece of code. The ‘#define’ directive is used to define a macro. Let us now understand the macro definition with the help of a program:


#include <iostream>
#define pi 3.1419 //const
#define service_text 0.12
// macro definition
#define LIMIT 5 //Limit 5 is const
int main()
{
    for (int i = 0; i < LIMIT; i++) {
        std::cout << i << "\n";              //output - 0 1 2 3 4
    }
 
    return 0;
}


#include <iostream>
 
// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
    int l1 = 10, l2 = 5, area;
 
    area = AREA(l1, l2);               //outp[ut- Area of rectangle is 50
 
    std::cout << "Area of rectangle is: " << area;
 
    return 0;
}
