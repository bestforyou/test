/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: 三  9/14 10:20:42 2016
 ************************************************************************/

#include<stdio.h>
typedef struct{
    char *name;
    int age;
    double score;

} STR;
int main()
{

    STR strstu;
    strstu.name="abc";
    strstu.age=20;
    strstu.score=22.32;
    return 0;
}
