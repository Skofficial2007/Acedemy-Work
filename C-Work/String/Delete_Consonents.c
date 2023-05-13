/*
Write a program to delete all the consonents from the string "Hello, have a good day".
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "hello, have a good day";
    int len=strlen(s);
    char ch[100];
    int x=0;

    for(int i = 0; i<len; i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            ch[x] = s[i];
            x=x+1;
        }
    }
    
    for(int i = 0; i<x; i++)
    {
        printf("%c",ch[i]);
    }
    return 0;
}