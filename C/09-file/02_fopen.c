#include <stdio.h>

int main(int argc, char *argv[])
{
    // ʹ��fopen�����򿪻��ߴ����ļ��������ļ�ָ��
    FILE *fp;
    // ��ֻ���ķ�ʽ���ļ�������ļ��������򱨴�
    // fp = fopen("C:/Users/liming/Desktop/file.txt", "r");

    // ��ֻд�ķ�ʽ���ļ�������ļ��������򴴽�������ļ��������
    // fp = fopen("C:/Users/lzx/Desktop/file.txt", "w");

    // ��ֻд�ķ�ʽ���ļ�������ļ��������򴴽������Ŷ�ļ�������׷��
    fp = fopen("D:/file.txt", "a");
    if (fp == NULL)
    {
        printf("fail to fopen\n");
        return -1;
    }
    else
    {
        printf("���ļ�\n");
    }
    int c;
    while ((c = fgetc(fp)) != EOF)
    {
        printf("c = [%c] - %d\n", c, c);
    }
    // ʹ��fclose�ر��ļ�
    // fclose(fp);

    return 0;
}
