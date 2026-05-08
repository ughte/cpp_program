#include <iostream>
#include <cmath>
int main(){
    double x =9;
    double y=3;
    double z;
    z = std::max(x,y);//outputs the greater number,works within <iostream>
    //z = std::min(x,y);//outputs the least number
    //z = pow(9,3);//raising 9 to the power of 3
    //z = sqrt(9);//square root
    //z = abs(-3);//changes negative to positive and vice versa
    //z = round(x);//round to nearest 
    //z = ceil(x); //round up
    //  z = floor(x);//round down

    std::cout<<z;

    return 0;
}