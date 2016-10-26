/*************************************************************************
	> File Name: test2.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/22 14:16:50 2016
 ************************************************************************/

#include<iostream>
using namespace std;

    namespace Li
    {
        int age=10;
    }        

    namespace Wang
    {
        int age=20;
    }
int main()
{

    using Wang::age;
    printf("%d",age);

    return 0;
}

