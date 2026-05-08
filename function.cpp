// #include <iostream>

// void happybir(std::string name,int age);

// int main(){
//     std::string name ="pat";
//     int age =18;
//     happybir(name,age);
//     return 0;
// }
// void happybir(std::string name,int age){
//     std::cout<<"happy birthday "<< name <<'\n';
//     std::cout<<"happy birthday dear you!"<<'\n';
//     std::cout<<"happy birthday!"<<'\n';
//     std::cout<<"you are "<< age<<"years old"<<'\n';

// }

#include <iostream>
#include <cmath>
double square(double length); 
double cube(double lenght);

int main(){
    double length = 5.0;
    double area =square(length);
    double volume = cube(length);//or i could comment line 25 and input 5.0 manually on line 26 & 27
    std::cout<<"the area of the square is "<<area << "cm^2\n";
    std::cout<<"the volume is "<<volume<<"cm^3\n";
    return 0;
}
double square(double length){
    double result = length * length;
    return result;
    //or
    //double square(double length){
    //return length*length;}
}

double cube(double length){
    return pow(length,3);
}