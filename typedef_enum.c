#include<stdio.h>
#include<stdlib.h>

typedef enum{
  All,
  January,
  February,
  March,
  April,
  May
}month;

month Month;
int mon;

main(){
  
  printf("隨意輸入1到5之間的一個數");
  scanf("%d",&mon);
  
  switch(mon){
      case January:
          printf("一月\n"); 
	  break;
      case February:
          printf("二月\n"); 
	  break;
      case March:
          printf("三月\n"); 
	  break;
      case April:
          printf("四月\n"); 
	  break;
      case May:
          printf("五月\n"); 
	  break;
      default:
          printf("要輸入1到5之間的數喔\n");
	  break;
  }
}
