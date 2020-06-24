/*

Author : 5hifaT

github:https://github.com/jspw

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 


*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long


//Sort array in discending order (n to 1)
bool decSort(ll a,ll b){
    return a>b;
}


//find the maximum element of a array
ll max_of_array(ll a[],ll n){
    ll mx=a[0];
    for(ll i=0;i<n;i++){
        if(a[i]>mx) mx = a[i];
    }
    return mx;
}


//find the minimum element of a array
ll min_of_array(ll a[],ll n){
    ll mn=a[0];
    for(ll i=0;i<n;i++){
        if(a[i]<mn) mn = a[i];
    }
    return mn;
}


//check valid parenthesis

bool isValid(vector<char>str) 
{ 
    stack<char> s; 
    char x; 
    for (int i=0; i<str.size(); i++) 
    { 
        if (str[i]=='('||str[i]=='['||str[i]=='{') 
        { 
            s.push(str[i]); 
            continue; 
        } 
        if (s.empty()) 
           return false; 
  
        switch (str[i]) 
        { 
        case ')': 

            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
    return (s.empty()); 
} 


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<char>v;

    string str;

    getline(cin,str);

    int bra11=0,bra12=0,bra21=0,bra22=0,bra31=0,bra32=0;

    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            bra11++;
            v.push_back(str[i]);
        }else if(str[i]==')'){
            bra12++;
            v.push_back(str[i]);
        }
        else if(str[i]=='{'){
            bra21++;
            v.push_back(str[i]);
        }else if(str[i]=='}'){
            bra22++;
            v.push_back(str[i]);
        }
        else if(str[i]=='['){
            bra31++;
            v.push_back(str[i]);
        }else if(str[i]==']'){
            bra32++;
            v.push_back(str[i]);
        }

    }

    // for(int i=0;i<str.size();i++){
    //     if( str[i]!='(' && str[i]!=')' &&  str[i]!='{' && str[i]!='}' && str[i]!='[' && str[i]!=']' ){
    //         v.push_back(str[i]);
    //     }

    // }

    if(!v.empty()){

        // if( bra11 == bra12 && bra21 == bra22 && bra31 == bra32  ){
        //     cout<<"Y ";
        // }
        // else cout<<"N ";

        if(isValid(v)) cout<<"Y ";
        else cout<<"N ";

        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }

        cout<<endl;
    }






    return 0;
}