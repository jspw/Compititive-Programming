#include<stdio.h>
int main()
{
    int i,j,k;
    int a[2][3][4] =
    {
        {

            {1,2,3,4},
            {6,7,3,4},
            {2,3,4,5}
        },
        {

            {1,2,3,4},
            {6,7,3,4},
            {2,3,4,5}

        },

    };

      for(i=0;i<2;i++)
       {
           for(j=0;j<3;j++)
           {
               for(k=0;k<4;k++)
               {
                   printf("%d ",a[i][j][k]);

               }
               printf("\n");
           }
            printf("\n");
       }



   /* printf("%d ",a[0][0][0]);
    printf("%d ",a[0][0][1]);
    printf("%d ",a[0][0][2]);
    printf("%d ",a[0][0][3]);
    printf("%d ",a[0][1][0]);
    printf("%d ",a[0][1][1]);
    printf("%d ",a[0][1][2]);
    printf("%d ",a[0][1][3]);


*/



    return 0;
}
