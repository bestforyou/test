/*************************************************************************
	> File Name: test4.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/22 14:33:19 2016
 ************************************************************************/

#include<iostream>
/*using namespace std;*/

class Stu
{
    private:
        float score;
    
    public:
        void say(float &f)
        {
            score = f;
            printf("%f",score);
        }

};

void printf()
{
    printf("s:ws");
}

int main()
{
    printf();
    Stu stu;
    float f;
    scanf("%f",&f);
    stu.say(f);
}
