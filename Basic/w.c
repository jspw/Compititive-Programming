#include<stdio.h>

main()

{
    int a,b,c;

    for(a=1;a<=5;a++) {

        for(b=1;b<=5;b++) {

            if(b!=a) {

                for(c=1;c<=5;c++) {

                    if(c!=b&&c!=a) {

                        printf("%d, %d, %d\n" , a, b, c);


                    }

                }

            }


        }

    }

    return 0;

}
