#include <iostream>
int main(){
    std::string students[]={"pat","kate","jen"};
    //int grades[]={56,35,56};

    for(std::string student : students){
        std::cout<<student<<'\n';
    }//works like for loop but easier but less flexible
    return 0;
}