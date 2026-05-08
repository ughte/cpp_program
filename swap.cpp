#include <iostream>
int main(){
    int num;
    int reverse;

    std::cout<<"enter a five digit "<<'\n';
    std::cin>>num;
    int first=num/10000;
    int second=num%10000;
    int third=num%1000;
    int fourth=num%100;
    int last=num%10;

    second = second - third;
    third = third - fourth;
    fourth = fourth -last;

    last = last * 10000;
    fourth = fourth*100;
    second = second/100;

    reverse = last + fourth + second + first + third;

    std::cout<<reverse<<'\n';

    //56727

    return 0;

}