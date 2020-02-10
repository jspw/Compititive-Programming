#include<stdio.h>
int main()
{
    float A,B,C,MEDIA;
    while(scanf("%.01lf%.01lf%.01lf",&A,&B,&C)!=EOF)
    {
      MEDIA=(A*2+B*3+C*5)/(2+3+5);
      printf("MEDIA = %.01lf\n",MEDIA);
    }
    return 0;

}
