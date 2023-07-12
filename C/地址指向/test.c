#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 定义结构体类型
typedef struct
{
  char name[32];
  int age;
  // 定义结构体变量之定义结构体类型的同时定义结构体变量
} stu;

// void fn(stu *a)
// {
//   printf("%p\n", *a); // 堆地址
//   printf("%p\n", a);  // 堆地址
//   printf("%p\n", &a); // 堆地址
// }

// int main(int argc, char *argv[])
// {
//   // 结构体变量的初始化
//   stu *zhaoliu = (stu *)malloc(sizeof(stu));
//   printf("%p\n", *zhaoliu); // 堆地址
//   printf("%p\n", zhaoliu);  // 堆地址
//   printf("%p\n", &zhaoliu); // 堆地址
//   fn(zhaoliu);
// }
void fn(stu **a)
{
  printf("%p\n", **a); // 堆地址
  printf("%p\n", *a);  // 指向一级指针的地址
  printf("%p\n", a);   // 指向二级指针的地址
  printf("%p\n", &a);  // 指向
}

int main(int argc, char *argv[])
{
  // 结构体变量的初始化
  stu *zhaoliu = (stu *)malloc(sizeof(stu));
  printf("%p\n", *zhaoliu); // 堆地址
  printf("%p\n", zhaoliu);  // 堆地址
  printf("%p\n", &zhaoliu); // 堆地址
  fn(&zhaoliu);
}