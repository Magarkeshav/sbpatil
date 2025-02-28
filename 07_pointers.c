#include<stdio.h>

int main(){
    
    int age=22;
    int *ptr=&age;
    // int _age=&ptr;

    printf("Address of age: %p\n",age);
    printf("Address of age in unsigned integer is: %u",age);

    
    return 0;
}