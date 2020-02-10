#include<iostream>
#include<stdio.h>
#include<list>
#include<algorithm>
#include<iterator>
#include<vector>

using namespace std;

bool mt(int a,int b)
{
    return (a>b);
}

int main()

{

    int i,j,c[3];
    int t1,t2,fl,ad,ctf,T,total_mark;

    cin>>T;


    for(j=1; j<=T; j++)

    {

        cin>>t1>>t2>>fl>>ad>>c[0]>>c[1]>>c[2] ;



        vector <int> lst(&c[0],&c[3]) ;
        vector <int> :: iterator it ;

        sort(lst.begin(),lst.end(),mt) ;

        for(it=lst.begin(),i=0;it!=lst.end(),i<3;it++,i++)

        {
            c[i]=*it ;

        }



        ctf=(c[0]+c[1])/2;



        total_mark = t1 + t2 + fl + ad + ctf ;


        if(total_mark <60)
        {

            cout << "Case " << j << ": F" <<endl ;

        }

        else if(total_mark >= 90)
        {

            cout << "Case " << j << ": A" <<endl ;



        }

        else if(total_mark >= 80 && total_mark <90)
        {

            cout << "Case " << j << ": B" <<endl ;



        }

        else if(total_mark >= 70 && total_mark < 80)
        {

            cout << "Case " << j << ": C" <<endl ;



        }

        else if(total_mark >= 60 && total_mark <70)
        {

            cout << "Case " << j << ": D" <<endl ;



        }


    }

    return 0;
}
