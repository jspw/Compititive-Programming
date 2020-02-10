#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,in=0,v=0,y=0,o=0;
    string str;
    string orange="orange",violet="violet",indigo="indigo",yellow="yellow";

    cin>>n;
    for(i=0;i<n;i++){
        cin>>str;

        if(str.size()==3){
            cout<<"red"<<endl;
        }
        else if(str.size()==4)
            cout<<"blue"<<endl;
        else if(str.size()==5){
            cout<<"green"<<endl;
        }
        else if(str.size()==6){
            for(int j=0;j<6;j++){
                if(str[j]==orange[j])
                    o++;
                 else if(str[j]==yellow[j])
                    y++;
                else if(str[j]==indigo[j])
                    in++;
                else if(str[j]==violet[j])
                    v++;

            }

            if(o==5)
            cout<<"orange"<<endl;
        else if(y==5)
            cout<<"yellow"<<endl;
        else if(v==5)
            cout<<"violet"<<endl;
        else if(in==5)
            cout<<"indigo"<<endl;

            }

        }

    return 0;

}
