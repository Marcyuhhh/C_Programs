#include<stdio.h>
int main (){
   
  int G;
  printf("GRADE PASSER DETERMINATOR\n");
  printf("Enter grade: ");
  scanf("%d", &G);
  
  if (G >= 60)
  printf("CONGRATULATIONS YOU PASSED!");
  else
  printf("SORRY YOU FAILED!");
  return 0;
  
}
  