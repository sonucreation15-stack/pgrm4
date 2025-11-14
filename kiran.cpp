#include<stdio.h>
char str[50],pat[20],rep[20],res[50];
int c=0,m=0,i=0,j=0,k,flag=0;
void stringmatch()
{
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            m=c;
            while(str[c]==pat[i]&&pat[i]!='\0')
            {
                c++;
                i++;0
{
    res[j]=rep[k];
    }
    i=0;
    c=m;

}         }
else
    {
    res[j]=str[c];
j++;
c++;
m=c;
i=0;

}
        }
        res[j]='\0';

    }
    void main()
    {
        printf("Enter the main string;");
        gets(str);
        printf("\nEnter the pat string;");
        gets(pat);
        printf("\nEnter the replace string;");
        gets(rep);
        printf("\nThe string before pattern matech is:\n%s",str);
        stringmatch();
        if(flag==1)
           printf("\nThe string after pattern match and replace is:\n%s",res);
           else
            printf("\npattern string is not found");
           }
