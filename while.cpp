#include <iostream>
int main(){
    std::string name;
    while(name.empty()){//it runs as long as loop is empty ie. when the user does not input name
        std::cout<<"enter name "<<'\n';
        std::getline(std::cin,name);
    }

    std::cout<<"hello "<<name<<'\n';
    return 0;
}

//while(1==1){
// std::cout<<"HELP I AM STUCK IN AN INFINITE LOOP "<<'\n';}
//this loop is infinte because 1==1 is true