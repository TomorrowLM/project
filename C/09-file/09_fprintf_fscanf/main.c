#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch1='a', ch2;
    int num1=50, num2;
    char string1[20]="hello", string2[20];
    float score1 = 85.5, score2;

    if((fp = fopen("C:/Users/����/Desktop/file.txt","w+"))==NULL)
    {
        printf("fail to fopen\n");
        return -1;
    }

    //???fprintf?????��???????
    fprintf(fp,"%c %d %s %f\n",ch1,num1,string1,score1);

    rewind(fp);

    //???fscanf??????????
    fscanf(fp,"%c %d %s %f\n",&ch2,&num2,&string2,&score2);
    printf("%c %d %s %f\n",ch2,num2,string2,score2);

    fclose(fp);
    return 0;
}
