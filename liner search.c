#include<stdio.h>
#include<conio.h>

int main(){
  int list[20],size,i,sElement;

  printf("Enter size of the list: ");
  scanf("%d",&size);

  printf("Enter any %d integer values: ",size);
  for(i = 0; i < size; i++)
    scanf("%d",&list[i]);

  printf("Enter the element to be Search: ");
  scanf("%d",&sElement);
  
  // Linear Search Logic
  for(i = 0; i < size; i++)
  {
     if(sElement == list[i])
     {
        printf("Element is found at %d index", i);
        break;
     }
  }
  if(i == size)
     printf("Given element is not found in the list!!!");
  getch();
}

output:
Enter size of the list: 5
Enter any 5 integer values: 3 4 6 8 9
Enter the element to be Search: 6
Element is found at 2 index
 OUTPUT 2:
 Enter size of the list: 7
Enter any 7 integer values: 4 56 78 89 45 3 99
Enter the element to be Search: 4
Element is found at 0 index
