#include <iostream>
#include <ctime>
int main(){
    srand(time(NULL));
    int randnum=rand() % 5 +1;// i want numbers between 1-5 hence the %5 but without +1 it will generate 0-5 instead

    switch(randnum){
        case 1:
        std::cout<<"you lost "<<'\n';
        break;

        case 2:
        std::cout<<"you won $20 "<<'\n';
        break;

        case 3:
        std::cout<<"you won a gift card! "<<'\n';
        break;

        case 4:
        std::cout<<"you lost "<<'\n';
        break;

        case 5:
        std::cout<<"you won airtime! "<<'\n';
        break;
    }
    return 0;
}