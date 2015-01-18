#include<iostream>
#include<cstring>
using namespace std;
void change(char* s,char*s1, int lenght)
{
    j=0;
    for(int i=lenght-1;i>=0;i--)
    {
        s1[j] = s[i];
        j++
    }
s1[j]='\0';
}


int main()
{


char s[100];
cin.getline(s,100);
int count=0;
char s1[100];
for(int i=0;i< strlen(s)-1;i++)
{

    if(s[i]!=' ')
    {
        s1[i]=s[i];
    }
    if( )

}
cout<<count++;


return 0;
}
//0.6 / 2.2