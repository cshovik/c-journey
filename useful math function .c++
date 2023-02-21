#include <iostream>
#include <cmath>

//cout << (insertion operator)
//cin>> (extraction operator)

int main(){
    double x = 3;
    double y = 4;
    double max,min,z,s,ab,r,c,f;

    max = std::max(x,y);
    std::cout << max << '\n';

    min= std::min(x,y);
    std::cout << min<< '\n';

    z = pow(2,3);
    std::cout << z<<'\n';

    s= sqrt(9);
    std::cout<<s;

    ab = abs(-3);
    std::cout<<ab<<'\n';

    r= round(-2.56);    // 2.56-- output:3
    std::cout<<r<<'\n'; // -2.56 --output:-3

    c= ceil(-2.99); //2.99 -- output :3
    std:: cout<<c<<'\n'; //-2.99 --output:-2

    f=floor(2.99);//2.99 -- output: 2
    std::cout<<f;//-2.99 -- output: -3


    
   return 0;


}
