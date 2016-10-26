#include <stdio.h>

int main()
{       
    struct stu{
        int age;
        char xb;
        int class;
        char group;
        char *name;
    };

    struct sts{
        int age;
        char xb;
        int class;
        char group;
        char *name;
    } stu3, stu4 = {30, 'n', 3, 'A',"蔡达"};

    printf("%d, %c, %d, %c ,%s", stu3.age, stu4.xb, stu3.class, stu4.group, stu4.name);
    



    return 0;
}
