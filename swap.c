#include <stdio.h>
#define  SWAP(x,y,t)  ((t)=(x),(x)=(y),(y)=(t))
void swap(int *a,int *b);
int main(void) {
    int a=1,b=2,c;
    SWAP(a,b,c);
    printf("%d, %d\n",a,b);
    swap(&a,&b);
    printf("%d, %d\n",a,b);
    return(0);
}

void swap(int *a,int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
