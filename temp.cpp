#include <iostream>
int main(){
    int temp,choice;
    double degree,farenheit; 

    std::cout<<"enter the temperature to be coneverted "<<'\n';
    std::cin>>temp;

    std::cout<<"choose the type of conversion "<<'\n';
    std::cout<<"1.degree to farenhiet "<<'\n';
    std::cout<<"2.farenheit to degree "<<'\n';
    std::cin>>choice;


    switch(choice){
        case 1:
        farenheit=(temp * 9/5) +32;
        std::cout << temp <<"degree to farenheit is "<<farenheit<<'\n';
        break;

        case 2:
        degree=5*(temp-32)/9;
        std::cout<< temp <<"farenheit to degree is "<< degree <<'\n';
        break;

        default:
        std::cout<<"choose option 1 or 2 "<<'\n';

    }

    // if(tem > 0 && < 30){
    //     std::cout<<"the temperature is good today ";
    // }
    // else{
    //     std::cout<<"it is bad ";
    // }
    return 0;
}