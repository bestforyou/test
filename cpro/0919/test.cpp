/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/19 10:28:44 2016
 ************************************************************************/

#include<iostream>
using namespace std;

namespace diy{
    class Stu{
        public:
            const char *name;
            int age;
            float score;
    
        public:
            void say(){
                printf("aabbss");
            }
    };

}

int main()
{
    diy::Stu blstu;
    blstu.name="小明";
    blstu.age=21;
    blstu.score=2.3;
    printf("%s\n%d\n%f\n", blstu.name, blstu.age, blstu.score);
    blstu.say();
}

