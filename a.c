//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>

/*
char* my_memmove(void* dest,void* src,int sz){
    assert(dest && src && sz);
    char* p1 = (char*)dest;
    char* p2 = (char*)src;
    if(p1 < p2)
    {
        while(sz--)
        {
            *(char*) p1 = *(char*) p2;
            ++p1;
            ++p2;
        }
    }else
    {
        while(sz--)
        {
            *(p1- sz) = *(p2 - sz);
        }
    }
    return dest;
}

int main(){
    int arr1[] = {1,2,3,4,5,6,};
    int sz = sizeof(arr1);
    char* a = my_memmove(arr1,arr1 + 2,sz);
    for(int i = 0;i < 6;i++){
        printf("%d",a+i);
    }
}*/

/*
struct
{
    int a;
    int b;
    float c;
}x;
int main(){

    return 0;
}*/

/*typedef struct Dude{
    int data;
    struct Dude* next;
}Node;

struct T{
    double weight;
    short age;
};

struct s{
    char c;
    struct T st;
    int a;
    double d;
    char arr[29];
};

int main(){
    Node N1;
    struct Dude N2;
    struct s s1 = {'F',{70.2,25},19,56.12,"Life is a fxxxing movie"};
    printf("%c %f %d %d %f %s",s1.c,s1.st.weight,s1.st.age,s1.a,s1.d,s1.arr);
    return 0;
}*/

/*#pragma pack(8)
struct s{
    double d;
    char c1;
};
int main(){
    struct s s1;
    printf("%d",sizeof(s1));

    return 0;
}*/

/*
struct s{
    char a : 2;
    char b : 3;
    char c : 5;
    char d : 6;
};

enum Sex{
    MALE = 2,
    FEMALE,
    SECRET = 9
};

enum Color{
    RED,
    BLUE,
    YELLOW,
    GREEN
};
*/

/*int main(){
*//*    struct s s1;
    printf("%d",sizeof(s1));
    enum Sex s = MALE;
    enum Color c= RED;*//*

    printf("%d %d %d %d\n ",RED,BLUE,YELLOW,GREEN);
    printf("%d %d %d\n",MALE,FEMALE,SECRET);

}*/

/*void check_sys(char* str){
    if(*str == 1){
        printf("Ð¡¶Ë´¢´æ\n");
    }else{
        printf("´ó¶Ë´¢´æ");
    }
}

int main()
{
        int a = 1;
        char* p1 = (char*)&a;
        check_sys(p1);
}*/
