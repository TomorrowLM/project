#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //ʹ��strcmp�Ƚ������ַ����������Ƿ�һ��
    //strcmp����һ���ַ�һ���ַ��Ƚϣ�ֻҪ���ֲ�һ���ģ��ͻ���������
    char s1[] = "hello";
    char s2[] = "hella";

    //int ret = strcmp(s1, s2);
    int ret = strncmp(s1, s2, 4);

    if(ret == 0)
    {
        printf("s1 = s2\n");
    }
    else if(ret > 0)
    {
        printf("s1 > s2\n");
    }
    else
    {
        printf("s1 < s2\n");
    }

    return 0;
}
