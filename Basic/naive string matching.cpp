#include<bits/stdc++.h>
using namespace std;

void search(string text,string pattern){
    int i,j;
    for (i=0;i<text.size()-pattern.size();i++){
        for (j=0;j<pattern.size();j++){
            if(text[i+j]!=pattern[j])
                break;
        }

        if(j==pattern.size())printf("PAttern found at index %d\n",i);

    }
}

int main(){

    string text,pattern;
    printf("Enter text : ");
    getline(cin,text);
    printf("Enter pattern : ");
    getline(cin,pattern);

    search(text,pattern);
    
}