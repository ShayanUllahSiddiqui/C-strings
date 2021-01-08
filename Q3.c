#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100];
    char splitStrings[10][10]; 
    int i,j,cnt;
 
    printf("Student Detail: ");
    fgets(str);
 
    j=0; cnt=0;
    for(i=0;i<=(strlen(str));i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            splitStrings[cnt][j]='\0';
            cnt++;  
            j=0;    
        }
        else
        {
            splitStrings[cnt][j]=str[i];
            j++;
        }
    }
    
    
    for(i=0;i < cnt;i++)
        printf("%s\n",splitStrings[i]);
    return 0;
}