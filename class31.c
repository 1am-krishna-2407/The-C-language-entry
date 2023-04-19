#include<stdio.h>
#include<stdlib.h>
struct student{
    
    char*name;
    int age;
    int weight;
};
int main(){
    struct student s;
    s.name= "Krishna";
    s.age= 19;
    s.weight= 68;
    printf("student_ name=%d student_age= %d student_weight= %d", s.name, s.age, s.weight);
}