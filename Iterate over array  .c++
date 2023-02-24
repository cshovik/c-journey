#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

//size () = determixes the size in bytes of a :
            //variable, data type, class,objects, etc.
int main(){
 
 std::string students[] = {"spongbob","Patrick", "Squilsbarg", "Sandy"};

 for(int i=0; < 4; i++){
  std::cout << students[i] << '\n';
 }

 return 0;
}

//method 2 - best method- if we add or substract more value than also , we don't have to change in for loop, previoys method we have to change in i<4 for 4 value

#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

//size () = determixes the size in bytes of a :
            //variable, data type, class,objects, etc.
int main(){
 
 std::string students[] = {"spongbob","Patrick", "Squilsbarg", "Sandy"};

 for(int i=0; i< sizeof(students)/sizeof(std::string); i++){
  std::cout << students[i] << '\n';
 }

 return 0;
}
