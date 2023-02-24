#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

 //foreach loop = loop that eases the traversal over an iterable data set

 // can be used instead of usual for iteration

int main(){
 
 std::string students[] = {"spongbob","Patrick", "Squilsbarg", "Sandy"};

 int grades[] = {34,46,76,65};
 
 for(std::string student : students){
  std::cout <<student << '\n';
 }

 for(int grade : grades){
  std::cout <<grade <<'\n';
 }// output - print all the elements 34, 46, 76 , 65

 return 0;
}
