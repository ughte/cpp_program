#include <iostream>

int main(){
    char grade;
    std::cout<<"enter your grade "<<'\n';
    std::cin>>grade;

    switch(grade){
        case 'A':
        std::cout<<"excellent ! ";
        break;

        case 'B':
        std::cout<<"very good ! ";
        break;

        case 'C':
        std::cout<<"good ! ";
        break;

        case 'D':
        std::cout<<"passed ! ";
        break;

        case 'E':
        std::cout<<"fair ! ";
        break;

        case 'F':
        std::cout<<" fail, take a resit ! ";
        break;

        default:
        std::cout<<"wrong letter grade"; 


    }

    return 0;
}