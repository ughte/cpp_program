#include <iostream>

std::string concatString(std::string string1,std::string string2);

int main(){
    std::string firstname="pat";
    std::string lastname="narh";
    std::string fullName=concatString(firstname,lastname);

    std::cout<<"hello "<<fullName;

    return 0;
}


std::string concatString(std::string string1,std::string string2){
    return string1 +  string2;

} 