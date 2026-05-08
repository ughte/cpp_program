#include <iostream>
 
int main(){
    int a,b;
    double result;
    char op;

    std::cout<<"simple calculator"<<'\n';
    std::cout<<"number one: "<<'\n';
    std::cin>>a;

    std::cout<<"number two: "<<'\n';
    std::cin>>b;

    std::cout<<"choose operator(*,%,/,-,+) "<<'\n';
    std::cin>>op;

    switch(op){
        case '*':
        result = a*b;
        std::cout<<"result"<<result<<'\n';
        break;

        case '%':
        if( b >=0){
            std::cout<<"invalid number choose a number not less than or equal to 0"<<'\n';
        }
        else{
        result = a%b;
        std::cout<<"result"<<result<<'\n';} 
        break;

        case '/':
        if(b == 0){
        std::cout<<"invalid number choose a number not equal to zero"<<'\n';
        } 
        else{
        result = (double) a/b;
        std::cout<<"result"<<result<<'\n';}
        break;

        case '-':
        result = a-b;
        std::cout<<"result"<<result<<'\n';
        break;

        case '+':
        result = a+b;
        std::cout<<"result"<<result<<'\n';
        break;

        default:
        std::cout<<"choose a valid operator ";
        break;


    }


    return 0;
}