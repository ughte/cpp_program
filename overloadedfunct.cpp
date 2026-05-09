#include <iostream>
void bakepizza();
void bakepizza(std::string topping1,std::string topping2);

int main(){
   // std::string topping1 = "sausage";
   // std::string topping2 = "peperoni";

     bakepizza();
     bakepizza("peperoni","sausage");
    
    return 0;
}

void bakepizza(){
    std::cout<<"here is your pizza "<<'\n';
}
//functions can have the same name as long as they have different parameters
void bakepizza(std::string topping1,std::string topping2){
    std::cout<<"here is your  "<<  topping1 << " and " << topping2 << " pizza " << '\n';
}