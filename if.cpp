#include <iostream>
int main(){
    int age;
    std::cout<<"enter you age"<<'\n';
    std::cin>>age;


    if(age >= 100){
        std::cout<<"hm! you are too old ";
    } 
    
    else if(age >= 18){
        std::cout<<"welcome to my page ";
    }
    else if(age <= 0){
        std::cout<<"invalid age ";
    }
    
    else {
        std::cout<<"restricted ";
    }
    return 0;
} 