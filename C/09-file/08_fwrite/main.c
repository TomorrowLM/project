#include <stdio.h>

typedef struct{
    int a;
    int b;
    char c;
}MSG;

int main(int argc, char *argv[])
{
    FILE *fp;
    fp = fopen("C:/Users/lzx/Desktop/file.txt", "w+");
    if(fp == NULL)
    {
        printf("fail to fopen\n");
        return -1;
    }

    //ʹ��fwrite���ļ�д��һ���ṹ��
    MSG msg[4] = {1, 2, 'a', 3, 4, 'b', 5, 6,'c', \
                 7, 8, 'd'};

    fwrite(msg, sizeof(MSG), 4, fp);

    //���ļ���ƫ��������Ϊ�ļ�����ʼλ��
    rewind(fp);

    MSG rcv[4];
    fread(rcv, sizeof(MSG), 4, fp);
    int i;
    for(i = 0; i < 4; i++)
    {
        printf("%d - %d - %c\n", rcv[i].a, rcv[i].b, rcv[i].c);
    }


    return 0;
}
