#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //ʹ��atoi���������ַ���ת��Ϊ��������
    char s1[] = "7856";
    int ret1 = atoi(s1);

    printf("ret1 = %d\n", ret1);

    //ʹ��atof�������͵��ַ���ת��Ϊ����������
    char s2[] = "3.1415926";
    double ret2 = atof(s2);

    printf("ret2 = %lf\n", ret2);

    return 0;
}
