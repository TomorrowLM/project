#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    if((fp = fopen("C:/Users/lzx/Desktop/file.txt","w+"))==NULL)
    {
        printf("fail to fopen\n");
        return -1;
    }

    fputs("123456789\n", fp);
    fputs("abcdefghijklmn", fp);

    //��ȡ��ǰ�ļ�ָ��Ķ�дλ��
    printf("offset = %ld\n", ftell(fp));

    //����ǰ�ļ��Ķ�д�ļ����õ��ļ�����ʼλ��
    //rewind(fp);
    //fseek(fp, 0, SEEK_SET);

    //����ǰ�ļ��Ķ�дλ������Ϊ���������λ��
    fseek(fp, -5, SEEK_END);

    char buf[32] = "";
    while(fgets(buf, 32, fp) != NULL)
    {
        printf("[%s]\n", buf);
    }

    return 0;
}
