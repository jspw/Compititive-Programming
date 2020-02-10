#include<iostream>
#include<queue>
using namespace std;
void show(queue<string>queueTemp)
{
    while(!queueTemp.empty())
    {
        cout<<queueTemp.front()<<endl;
        queueTemp.pop();
    }
}

 int main()
 {
     queue <string > q;
     q.push("Shifat");
     q.push("Suriya");
     q.push("Mehedi");
     q.push("Hridoy");
  ///   q.pop();
 ///    q.pop();
     cout<<q.size()<<endl;

     cout<<q.front()<<endl;

     cout<<q.back()<<endl;

     cout<<q.empty()<<endl;  ///if q is not empty ,priunt 0 ,else true

     show(q);

     return 0;
 }
