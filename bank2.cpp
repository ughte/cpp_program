#include <iostream>

void showbalance(double balance);
double deposit(double balance,double amount);
double withdraw(double balance,double amount);

int main(){
    double balance=0;
    int choice;
    double amount=0;

do{
    std::cout<<"**banking system**"<<'\n';
    std::cout<<"what do you want to do today"<<'\n';
    std::cout<<"1.check balance"<<'\n';
    std::cout<<"2.deposit"<<'\n';
    std::cout<<"3.redraw "<<'\n';
    std::cout<<"4.exit"<<'\n';
    std::cin>>choice;

    switch(choice){
        case 1:
        showbalance(balance);
        break;

        case 2:
        balance = deposit(balance,amount);
        break;

        case 3:
        balance = withdraw(balance,amount);
        break;

        case 4:
        std::cout<<"thanks for choosing us!" <<'\n';
        break;


        default:
        std::cout<<"choose a number between 1-4 "<<'\n';}

}
    while(choice !=4);
    
    return 0;
}

    void showbalance(double balance){
    std::cout<<"you have "<<'$'<<balance<<" in your account "<<'\n';
}
    double deposit(double balance,double amount){
    std::cout<<"enter the amount to deposit "<<'\n';
    std::cin>>amount;

    if(amount <= 0){
        std::cout<<"invalid amount "<<'\n';
    }
    else {
        balance+=amount;
        std::cout<<"you are deposting "<<'$'<< amount <<'\n';
        std::cout<<"your new balance is "<<'$'<< balance <<'\n';
    }
    return balance;
}
    double withdraw(double balance,double amount){
    std::cout<<"enter the amount to withdraw "<<'\n';
    std::cin>>amount;

    if(amount > balance){
        std::cout<<"insufficient funds "<<'\n';
    }

    else{
        balance-=amount;
        std::cout<<"successfull withdrawal "<<'\n';
        std::cout<<"your new balance is "<<'$'<< balance <<'\n';
    }
    return balance;
}