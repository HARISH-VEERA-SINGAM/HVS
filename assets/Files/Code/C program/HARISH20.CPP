#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *f;
char ch;
int characters,words,lines;
clrscr();
f=fopen("sample.txt","r");
if(f==NULL)
{
printf("\nUnable to open file");
exit(EXIT_FAILURE);
}
characters=words=lines=0;
while((ch=fgetc(f))!=EOF)
{
characters++;
if(ch=='\n'||ch=='\0')
lines++;
if(ch==''||ch=='\t'||ch=='\n'||ch=='\0')
words++;
}
if(characters>0)
{
words++;
lines++;
}
printf("\nNumber of characters=%d",characters);
printf("\nNumber of words=%d",words);
printf("\nNumber of lines=%d",lines);
fclose(f);
getch();
}