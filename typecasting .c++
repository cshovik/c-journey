#include <iostream>


int main(){
   //type conversion = conversion of value of one data type to another
   //Implicit  = automatic
   //Explicit = procese vlaue with new data type(int)

   int x = 3.14;

   std::cout<<x; //output:3(imolicit)

    double y= (int)3.14; //output:3(Explicit)

    char c= 100;
    std ::cout<< c;// implicit

    int correct = 8;
    int question = 10;
    double score = correct/(double)question*100;

    std::cout<<score <<"%";


   return 0;


}
