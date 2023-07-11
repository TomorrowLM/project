#include <stdio.h>

// const����ȫ�ֱ���
// ��ʱȫ�ֱ���ֻ��ʹ�õ��ǲ����޸ģ�
// ���ֱ����ȫ�ֱ����޸�ֵ������ֱ�ӱ���
// ���ʹ��ȫ�ֱ����ĵ�ַ�޸�ֵ������ʱ�����쳣����
const int a = 100;
void test1()
{
    printf("a = %d\n", a);

    // a = 666;
    // printf("a = %d\n", a);

    int *p = &a;
    *p = 888;
    printf("a = %d\n", a);
}

// const������ͨ�ֲ�����
// ���Զ�ȡ������ֵ
// ����ֱ��ͨ�����������޸�ֵ�����뱨��
// ����ͨ�������ĵ�ַ�޸�ֵ
void test2()
{
    const int b = 100;
    printf("b = %d\n", b);

    // b = 666;
    // printf("b = %d\n", b);

    int *p = &b;
    *p = 888;
    printf("b = %d\n", b);
}

// const����ָ�����
// ���const����ָ����������ͣ��޷�ͨ��ָ������޸ĵ�ַ�����ֵ
// ���const����ָ��������޷��޸�ָ���������ĵ�ַ
// ���const������ָ����������ͣ�������ָ���������ֻ��ͨ��ԭ�������޸�ֵ
void test3()
{
    int c = 100;
    // const����ָ�����������
    // const int * p = &c;
    // const����ָ�����
    // int * const p = &c;
    // const������ָ����������ͣ�������ָ�����
    const int *const p = &c;
    printf("*p = %d\n", *p);

    c = 666;
    printf("*p = %d\n", *p);

    *p = 777;
    printf("*p = %d\n", *p);

    int d = 888;
    p = &d;
    printf("*p = %d\n", *p);
}

int main(int argc, char *argv[])
{
    test3();

    return 0;
}
