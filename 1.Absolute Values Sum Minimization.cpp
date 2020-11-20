#include <iostream>
#include <cmath>
#include <algorithm>


int absoluteValuesSumMinimization (int a[],int arrayLength){

     
     std::sort(a, a + arrayLength);
     if (arrayLength % 2 == 0){
         return a[(arrayLength / 2 ) - 1];
          }
     else {
          return a[(int)floor(arrayLength / 2 )];
     }

     
}

int main(){
     int a[] = {2,4,7};
     int b[] = {2,4,7,6};
     int c[] = {2,4,7,6,6};
     int d[] = {2,4,7,6,6,8};

     std::cout<<"Meadian for a : "<<absoluteValuesSumMinimization(a,3)<<std::endl;
     std::cout<<"Meadian for b : "<<absoluteValuesSumMinimization(b,4)<<std::endl;
     std::cout<<"Meadian for c : "<<absoluteValuesSumMinimization(c,5)<<std::endl;
     std::cout<<"Meadian for d : "<<absoluteValuesSumMinimization(d,6)<<std::endl;
}