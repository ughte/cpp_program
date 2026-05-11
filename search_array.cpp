#include <iostream>
int search(int array[],int size,int element);

int main(){
    int num[]={4,3,2,6,8};
    int size =sizeof(num)/sizeof(num[0]);
    int index = search(num,size,myNum);
    int myNum;

    std::cout<<"enter element to search for:"<<'\n';
    std::cin >> myNum;

    if(index != -2){
        std::cout<<myNum<<"is at index "<<index;
    }
    else{
          std::cout<<myNum<<"is not in array "<<'\n';
    }

    return 0;
}
 
int search(int array[],int size,int element){
    for(int i=0;i<size;i++){
        if(array[i] == element)
        return i;
    }
    return -2; 
}