#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
  char name[20];
  int num;
  struct student *next;
} STU;

link_create_head(STU **p_head, STU *p_new)
{
  STU *p_move = *p_head;
  if (*p_head == NULL)
  {
    p_new->next = NULL;
    *p_head = p_new;
  }
  else
  {
    while (p_move->next != NULL)
    {
      p_move = p_move->next;
    }
    p_new->next = NULL;
    p_move->next = p_new;
  }
}

void link_print(STU *p_head)
{
  STU *p_move;
  p_move = p_head;
  while (p_move != NULL)
  {
    printf("%s %d\n", p_move->name, p_move->num);
    p_move = p_move->next;
  }
}

void main()
{
  STU *head = NULL, *p_new = NULL;
  int num, i = 0;
  printf("请输入链表初始个数:\n");
  scanf("%d", &num);
  printf("%d", num);

  for (i; i < num; i++)
  {
    p_new = (STU *)malloc(sizeof(STU));
    printf("请输入学号、分数、名字:\n"); // 给新节点赋值
    scanf("%s %d", p_new->name, &p_new->num);
    link_create_head(&head, p_new);
  }
  link_print(head);
}