#include <iostream>


int main(){
    std::string number;

    std::cout<<"Enter a number: "<<std::endl;
    getline(std::cin,number);
    int length = number.length();
    for(int i = 0 ; i<=length;i++){
        number[length-i]=number[i];
    }
    std::cout<<"The reverse of the number is "<<number;
    return 0;

}

//5678
//[2]5
//[4-2]