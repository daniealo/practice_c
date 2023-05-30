#ifndef struct_H
#define struct_H

typedef struct {
    char name[30];
    int id ;
    char number[12];
    char email[100];
} student;

extern student s[30];
#endif