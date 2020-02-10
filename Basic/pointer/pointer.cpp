    #include<cstdio>
    #include<iostream>
    #include<stdlib.h>
    using namespace std;
    int main ()
    {
        int a=10,b=15;

        cin>>a;


        int *p,*q;
        p=&a;
        q=&b;

        printf("a = %d\t*p = %d\tb = %d\t*q = %d\n",a,*p,b,*q);

        a=100;
        b=400;
        
        cout<<"When a=100 , b=400"<<endl;
        cout<<p<<" "<<q<<endl;

        printf("a = %d\t*p = %d\tb = %d\t*q = %d\n",a,*p,b,*q);

        a=10,b=15;
        cout<<"When *p=*q "<<endl;
        cout<<p<<" "<<q<<endl;
        *p=*q;

        printf("a = %d\t*p = %d\tb = %d\t*q = %d\n",a,*p,b,*q);
        
        cout<<"When p=q "<<endl;
        a=10,b=15;
        p=q;

        printf("a = %d\t*p = %d\tb = %d\t*q = %d\n",a,*p,b,*q);


        cout<<p<<" "<<q<<endl;

        a++;
            cout<<&a<<endl;
        printf("a = %d\t*p = %d\tb = %d\t*q = %d\n",a,*p,b,*q);

            b++;
        cout<<&b<<endl;
        printf("a = %d\t*p = %d\tb = %d\t*q = %d\n",a,*p,b,*q);

        *p=111;
        cout<<&a<<endl;
         printf("a = %d\t*p = %d\tb = %d\t*q = %d\n",a,*p,b,*q);

        free(p);
        free(q);

        return 0;
    }