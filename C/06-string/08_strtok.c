#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //ʹ��strtok�����и��ַ���
    char s[] = "111:22222:33:4444444444:5555555555555";
    char *ret;

    //��һ���и�
    ret = strtok(s, ":");
    printf("ret = %s\n", ret);

    //���������и�ʱ��Ҫ��strtok�ĵ�һ��������NULL
    while((ret = strtok(NULL, ":")) != NULL)
    {
        printf("ret = %s\n", ret);
    }

    return 0;
}
