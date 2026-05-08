// #include <iostream>
// int main(){
//     for(int i=1; i<=3 ;i++){

//         for(int j= 0; j<=10 ;j++){
//         std::cout << i <<'\n';}
//         std::cout <<'\n';
//     }
   

//     return 0;
// }

#include <iostream>
int main(){
    int rows;
    int columns;
    char symbol;

    std::cout<<"how many rows ";
    std::cin>>rows;

    std::cout<<"how many columns ";
    std::cin>>columns;

    std::cout<<"enter a symbol to use  ";
    std::cin>>symbol;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            std::cout<<symbol;
        }
        std::cout<<'\n';
    }



    return 0;
}
