#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //ʹ��strcat����׷���ַ���
    char s1[32] = "hello world";
    char s2[32] = "abcdef";

    //strcat�Ǵ�s1��\0��λ�ÿ�ʼ׷�ӣ�ֱ��s2�ĵ�һ��\0������Ϻ����
    strcat(s1, s2);

    printf("s1 = %s\n", s1);

    return 0;
}
