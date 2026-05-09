#include <iostream>
 int main(){
    double amount;
    double balance = 0.0;
    int choice;

    std::cout<<"*banking system**"<<'\n';
    std::cout<<"what do you want to do today?"<<'\n';
    std::cout<<"1.check balance  "<<'\n';
    std::cout<<"2.deposit  "<<'\n';
    std::cout<<"3.redraw  "<<'\n';
    std::cout<<"4.exit  "<<'\n';
    std::cin>>choice;

    switch(choice){
        case 1:
        std::cout<<"your balance is : "<<'$'<<balance<<'\n';
        break;

        case 2:
        std::cout<<"enter the amount to deposit : "<<'\n';
        std::cin>>amount;
        if(amount <=0){
            std::cout<<"invalid amount!"<<'\n';
        }
        else{
            balance += amount;
            std::cout<<"you have deposited "<<'$'<< amount <<'\n';
            std::cout<<"your current balance is "<< '$'<<balance<<'\n';
        }
        break;

        case 3:
        std::cout<<"enter the amount to redraw : "<<'\n';
        std::cin>>amount;
        if(amount > balance){
            std::cout<<"insufficient funds!"<<'\n';
        }
        else{
            balance -= amount;
            std::cout<<"you have redrawn "<<'$'<< amount <<'\n';
            std::cout<<"your current balance is "<< '$'<<balance<<'\n';}
    
        break;

        case 4:
        std::cout<<"thank you for using us  "<<'\n';
        break;

        default:
        std::cout<<"choose a number between 1-4 "<<'\n';

    }
    return 0;
 }