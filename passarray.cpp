 #include <iostream>
 double getTotal(double prices[],int size);
 int main(){
    double prices[]={45,23.6,68.6};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total =getTotal(prices,size);//when passing an array to a function you dont need to add []

    std::cout<< "$" << total;
    return 0;
 }

 double getTotal(double prices[],int size){
 double total = 0;
for(int i = 0; i<size; i++ ){
  total = total + prices[i];
}

    return total;
 }