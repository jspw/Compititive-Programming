#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    for(int i=2; i<=9; i++)
    {
        if(n%i!=0)
            return false;

    }
    return true;
}

int main()


{

    FILE * fPtr;


    /*
     * Open file in w (write) mode.
     * "data/file1.txt" is complete path to create file
     */
    fPtr = fopen("file1.txt", "w");

    int n = 1;
    int t=1;
    while(true)
    {
        if(check(n))
        {
      //      cout<<"NO:"<<t++<<" "<<n<<endl;
            /* Write data to file */
            fprintf(fPtr,"No: %d -> %d\n",t++,n);


            /* Close file to save file data */

        }

        n++;
    }

    return 0;

}
