#include <iostream>
#include <cmath>

int main() {
   const double phi=3.14;
   double radius;
   std::cout<<"Plese type the radius"<<std::endl;
   std::cin >> radius;
   double ndradius=pow(radius, 2);
   double CircleArea=phi*ndradius;
   std::cout<<"This is your CircleArea"<<CircleArea;

   return 0;
}
