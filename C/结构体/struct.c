#include <stdio.h>

struct stu
{
  int score;
  char name[200];
} STU;

void main()
{
  char *buf_point = "hello world";
  struct stu liming[1] = {{score : 1, name : "liming"}};
  printf("%s", liming->name);
}