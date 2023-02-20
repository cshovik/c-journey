#include <iostream>
#include <vector>

typedef std:: string text_t;
typedef int number_t;

int main(){
    text_t firstname = "bro";
    number_t age =21;

    std:: cout<< firstname <<"\n";
    std:: cout<< age << '\n';

    return 0;
}

//using keywords used instead of typedef which is more famous 

#include <iostream>
#include <vector>

using text_t = std:: string ;
using number_t = int;

int main(){
    text_t firstname = "bro";
    number_t age =21;

    std:: cout<< firstname <<"\n";
    std:: cout<< age << '\n';

    return 0;
}
