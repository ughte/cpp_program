#include <iostream>
#include <string>

typedef std::string text_t;

int main(){
text_t firstname = "pat";
std::cout << firstname <<'\n';
    return 0;
}


//or
//#include <iostream>
//#include <string>
//int main(){
//std:string firstname="pat";
//std::cout<<firstname<<'\n';
//return 0;
//}

#include <iostream>
typedef int number_t;

int main(){
    number_t age =67;

    std::cout << age <<'\n';
    return 0;
}

or
#include <iostream>
int main(){
    int age=67; 
    std::cout<<age<<'\n';
    return 0;
}