#include <iostream>
int main(){
    int month;

    std::cout<<"enter a month(1-12) "<<'\n';
    std::cin>>month;

    switch(month){
        case 1:
        std::cout<<"it is january ";
        break;

        case 2:
        std::cout<<"it is february ";
        break;

        case 3:
        std::cout<<"it is march ";
        break;

        case 4:
        std::cout<<"it is april ";
        break;

        case 5:
        std::cout<<"it is may ";
        break;

        case 6:
        std::cout<<"it is june ";
        break;

        case 7:
        std::cout<<"it is july ";
        break;

        case 8:
        std::cout<<"it is august ";
        break;

        case 9:
        std::cout<<"it is september ";
        break;

        case 10:
        std::cout<<"it is october ";
        break;

        case 11:
        std::cout<<"it is november ";
        break;

        case 12 :
        std::cout<<"it is december ";
        break;
        
        default:
        std::cout<<"invalid choice ";

    }
    return 0;
}