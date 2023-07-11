#include <stdio.h>

//sprintf��sscanf�Ļ����÷�
void test1()
{
    char buf[20];
    int a, b, c;

    sprintf(buf,"%d:%d:%d",2013,10,1);
    printf("buf = %s\n",buf);

    sscanf("2013:10:1", "%d:%d:%d", &a, &b, &c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
}

//sscanf�߼��÷�
void test2()
{
    //1���������ݣ�%*s��%*d
    char buf1[20];
    sscanf("1234 5678","%*d %s",buf1);
    printf("%s\n",buf1);

    //2����ָ����ȵ����ݣ�%[width]s
    char buf2[20];
    sscanf("12345678","%4s ",buf2);
    printf("%s\n",buf2);

    //3��֧�ּ��ϲ�����ֻ֧�ֻ�ȡ�ַ���
    //   %[a-z]  ��ʾƥ��a��z�������ַ�(�����ܶ��ƥ��)
    //   %[aBc]  ƥ��a��B��c��һԱ��̰����
    //   %[^aFc] ƥ���a��F��c�������ַ���̰����
    //	 %[^a-z] ��ʾ��ȡ��a-z����������ַ�
    char buf3[20];
    sscanf("agcd32DajfDdFF","%[a-z]",buf3);
    printf("%s\n",buf3);
}

int main(int argc, char *argv[])
{
    test2();

    return 0;
}
