#include <iostream>
int main(){
    std::string name;
    std::cout<<"enter your name \n";
    std::getline(std::cin,name);

    if(name.empty()){//name.empty - checks if the name is empty it returns a boolean
    std::cout<<"you did not enter your name ";
     }
    else if(name.length()>=12){//gives the length of a name in charaters
        std::cout<<"your name cannot be over 12 characters\n";
     }
    else{
    std::cout<<"welcome "<<name<<'\n';
    name.append("@gmail.com");
    std::cout<<"your username is now "<<name;

     }

    
    return 0;
}

//name.clear(); - clears name
//name.append("@gmail.com"); - appends the name;to add something to the end of an existing data
//name.at(0); - prints out the letter at index 0 which is the first letter
//std::cout<<name.at(0);
//name.insert(0, "@"); to insert "@" at the index 0
//name.find(' '); - to find a certain character but i am finding white spaces within 'name'
//name.erase(0,3) - you will need a begining index and an ending index so this clears the first three characters
