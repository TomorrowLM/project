#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //ʹ��strstr������һ���ַ����в�����һ���ַ���
    char s[] = "1234:4567:666:789:666:7777";

    //strstr���ҵ�ʱ�򣬲��ҵ��ǵڶ��������ĵ�һ��\0֮ǰ������
    char *ret = strstr(s, "666");

    if(ret == NULL)
    {
        printf("û�ҵ�\n");
    }
    else
    {
        printf("�ҵ��ˣ��ڵ�ǰ�ַ����ĵ�%d��λ��\n", ret - s);
    }


    return 0;
}
