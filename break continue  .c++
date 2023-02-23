#include <bits/stdc++.h>
#include <iostream>
#include<cmath>

int main(){
  int number;
  
  //break
  for(int i=0; i<=10; i++){
    if(i == 5 ){
      break; //0 1 2 3 4
    }
    
    //continue

    if(i == 5 ){
      continue; //0 1 2 3 4 6 7 8 9 10
    }
    std::cout<<i<<'\n';
  }


  return 0;
}
