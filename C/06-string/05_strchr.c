#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //ʹ��strchr������һ���ַ����в����ַ�
    char s[] = "hel6lo wor6ld";
    //�ҵ�һ��ƥ����ַ�
    char *ret = strchr(s, '6');
    //�����һ��ƥ����ַ�
    //char *ret = strrchr(s, '6');

    if(ret == NULL)
    {
        printf("û���ҵ�\n");
    }
    else
    {
        printf("�ҵ��ˣ�������ĵ�%d��λ��\n", ret - s);
    }


    return 0;
}
