assignment=17
/*
Question=1
/*
#include <stdio.h>
#include<string.h>

int main()
{
    char str[20]="shivam";
    int i;
    for(i=0;str[i];i++);

    printf("the length of string is %d",i);

    return 0;
}
Question=2
/*
#include <stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,count=0,c;
printf("enter your string\n");
fgets(str,1000,stdin);
printf("enter your search charcter\n");
c=getchar();
for(i=0;str[i];i++)
{
    if(str[i]==c)
    {
        count++;
    }
}
printf(" character is '%c' occurs is %d times",c,count);
}
*\
Question =3
/*

#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i=0,count=0,c,a,e,o,u,A,E,I,O,U;
    printf("enter your string\n");
    fgets(str,1000,stdin);

    while(str[i]!='\0')

    {

        if(str[i]== 'a'|| str[i]== 'A' || str[i]== 'e' || str[i]== 'E' || str[i]== 'i' || str[i]== 'I' || str[i]== 'o' || str[i]== 'O' || str[i]== 'u' || str[i]== 'U')

            count++;
            i++;



    }

        printf("count the total vowel is %d",count);


}
*\
Question =4
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i=0,count=0;
    printf("enter your string\n");
    fgets(str,1000,stdin);
    strupr(str);
    printf("%s",str);
}
*\
Question=5
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i=0,count=0;
    printf("enter your string\n");
    fgets(str,1000,stdin);
    strlwr(str);
    printf("%s",str);
}
*\
Question =6
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i=0,count=0;
    printf("enter your string\n");
    fgets(str,1000,stdin);
    strrev(str);
    printf("%s",str);
}
*\
Question =7
/*

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i,alphabets=0,digits=0,specialcharacters=0;

    printf("Enter  the string : ");
    gets(s);

    for(i=0;s[i];i++)
    {
        if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='z') )
          alphabets++;
        else if(s[i]>='0' && s[i]<='9')
         digits++;
        else
         specialcharacters++;

 	}


    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);


    return 0;
}
*\
Question=8
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000],s2[1000];
    int i;

    printf("Enter  the string : ");
    fgets(s1,1000,stdin);

    for(i=0;s1[i];i++)

    {
            s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("first string is %s",s1);
    printf("copied string is %s",s2);

    }
*\
Question =9
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100], chTemp;
    int i, j, len;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                chTemp = str[j];
                str[j] = str[j+1];
                str[j+1] = chTemp;
            }
        }
    }
    printf("\nSame string in ascending order:\n%s", str);
    getch();
    return 0;
}
*\
