#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //ʹ��strcpy���������ַ���
    char s1[32] = "hello world";
    //ʹ��strcpy����ʱ�����뱣֤��һ���������ڴ��㹻��
    //char s1[5] = "abcd";
    char s2[32] = "abcdefg";

    strcpy(s1, s2);

    printf("s1 = %s\n", s1);

    int i;
    for(i = 0; i < 32; i++)
    {
        printf("[%c] - %d\n", s1[i], s1[i]);
    }

    return 0;
}
