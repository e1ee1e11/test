#include <stdio.h>
 
void strcpy_implementation2 (char x[], char y[]) 
{
    int i = 0;
    while (y[i]!='\0') 
    {
        x[i] = y[i];
	i++;
    }
    x[i]= '\0';
}
 
void strncpy_implement(char x[], char y[],int n)
{
    int i = 0;
    while (y[i]!='\0' && i<n)
    {
        x[i] = y[i];
        i++;
    }
    x[i]= '\0';

}

int main () {
 
    char str1[20] = "Sample string";
    char str2[20];
    char str3[20];
    
    strcpy_implementation2 (str2, str1);
    printf ("str1: %s\n", str1);
    printf ("str2: %s\n", str2);    // str2: Sample string
 
    strncpy_implement(str3, str1, 8);
    printf("str3: %s\n", str3); //str3: samp
    return 0;
 
}
