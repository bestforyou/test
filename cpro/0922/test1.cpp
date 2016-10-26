/*************************************************************************
	> File Name: test1.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/22 14:00:24 2016
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
   class Student{

        public:
            const char *name;
            double score;
            int age;
        public:
            void say()
            {
                printf("%s%f%d",name,score,age);
            }
    };

    Student stu;
    stu.name = "小明";
    stu.age = 12;
    stu.score = 22;
    stu.say();
    return 0;
}
