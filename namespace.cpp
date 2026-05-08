#include <iostream>

namespace first{
    int x=7;
}

namespace second{
    int x=5;
}

int main(){
    std::cout<<first::x;
    return 0;
}//namespace allows programmers to declare variables with the same name example i used 'x'