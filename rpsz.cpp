#include <iostream>
#include <ctime>

char userchoice();
char computerchoice();
void showchoice(char choice);
void choosewinner(char player,char computer);

int main(){
    char player;
    char computer;

    
    player = userchoice();
    std::cout<<"your choice: ";
    showchoice(player);

    computer = computerchoice();
    std::cout<<"computer's choice ";
    showchoice(computer);

    choosewinner(player,computer);

    return 0;
}

char userchoice(){
     char player;
     std::cout<<"rock paper scissors game!" <<'\n';

     do{
     std::cout<<"choose one of the following"<<'\n';
     std::cout<<" 'r' for rock" <<'\n';
     std::cout<<" 'p' for paper "<<'\n';
     std::cout<<" 's' for scissors "<<'\n';
     std::cin>>player;}
     while(player != 'r' && player != 'p' && player !='s');
return player;
}

char computerchoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';//break statement is not neccesary since we are returning a value
        case 2: return 'p';
        case 3: return 's';
     }
return 'r';
} 


void showchoice(char choice){
    switch(choice){
        case 'r':
        std::cout<<"rock "<<'\n';
        break;

        case 'p':
        std::cout<<"paper "<<'\n';
        break;

        case 's':
        std::cout<<"scissor "<<'\n';
        break;

        default:
        std::cout<<"choose 'r' ,'p' or 's'! "<<'\n';

    }

}


void choosewinner(char player,char computer){
    switch(player){
        case 'r':  if(computer == 'r'){
            std::cout<<" its a tie "<<'\n';
        }
        else if(computer == 'p'){
            std::cout<<"you lose!"<<'\n';
        }
        else{
            std::cout<<"you win !"<<'\n';
        }
        break;

        case 'p':  if(computer == 'p'){
            std::cout<<" its a tie "<<'\n';
        }
        else if(computer == 'r'){
            std::cout<<"you win!"<<'\n';
        }
        else{
            std::cout<<"you lose !"<<'\n';
        }
        break;

        case 's':  if(computer == 's'){
            std::cout<<" its a tie "<<'\n';
        }
        else if(computer == 'r'){
            std::cout<<"you lose!"<<'\n';
        }
        else{
            std::cout<<"you win !"<<'\n';
        }
        break;
    }

}

