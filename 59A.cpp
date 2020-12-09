#include<bits/stdc++.h>
using namespace std;
int main()
{
    char string[100];
    int cnt=0,cnt1=0;
    scanf("%s",&string);
    int len=strlen(string);
    for(int i=0; i<len; i++)
    {
        if(string[i]>='A'&&string[i]<='Z')
        {
            cnt++;
        }
    }
    for(int i=0; i<len; i++)
    {
        if(string[i]>='a'&&string[i]<='z')
        {
            cnt1++;
        }
    }
    if(cnt>cnt1)
    {
        printf("\n%s",strupr(string));
    }
    else if(cnt<cnt1)
    {
        printf("\n%s",strlwr(string));
    }
    else
    {
        printf("\n%s",strlwr(string));
    }
    return 0;
}
