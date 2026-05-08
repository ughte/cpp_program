#include <iostream>
int main(){
    std:: string name;
    int age;

    std::cout << "what is your name?" <<'\n';
    //std::cin >> name;
    std::getline(std::cin >> std::ws,name); //this reads strings with white spaces

    std::cout<< "what is your age?"<<'\n';
    std::cin>>age;

    std::cout<<"hello "<< name<< '\n';
    std::cout<<"you are "<< age <<" years old"<<'\n';

    return 0;
    
}