#ifndef struct_H
#define struct_H


typedef struct {
    char name[30];
    int id ;
    char number[12];
    char email[100];
    struct student *prev;
    struct student *next;
} student;

typedef struct {
    student *head;
    student *tail;
}  linkedlist;


extern student s[30];

#endif