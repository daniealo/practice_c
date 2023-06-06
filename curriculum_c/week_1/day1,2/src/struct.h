#ifndef struct_H
#define struct_H
#include <stddef.h>


typedef struct student{
    char name[30];
    int id ;
    char number[12];
    char email[100];
    struct student *prev;
    struct student *next;
   
} student;

struct student *head ;
struct student *tail ;




#endif