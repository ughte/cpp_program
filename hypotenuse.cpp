#include <iostream>
#include <cmath>

int main(){
    int lenght1;
    int lenght2;
    double hypotenuse;

    std::cout <<"*hypotenuse of a right angled triangle*"<<'\n';
    std::cout <<"first lenght(cm):" << '\n';
    std::cin  >> lenght1;

    std::cout <<"second lenght(cm)" <<  '\n';
    std::cin  >> lenght2;

    hypotenuse = sqrt (pow(lenght1,2) + pow(lenght2,2));

    //lenght1=pow(lenght1,2);
    //lenght2=pow(lenght2,c);
    // after declaring a 3rd variable lets say "c"
    //c = sqrt(lenght1 + lenght2);
    

    std::cout<<"your hypotenuse is " << hypotenuse << "cm" << '\n';

    return 0;
}