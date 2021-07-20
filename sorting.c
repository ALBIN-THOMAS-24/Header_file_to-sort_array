#include<SORTING.h>
#include<stdlib.h>
void main()
{
   int i,n,ch;
   printf("N=");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   while(1)
   {
        printf("1.selection sort\n2.bubble sort\n3.insertion_sort\n4.MERGE_SORT\n");
        printf("Enter Choice=");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:selection_sort(a,n);break;
	   
	   case 2:bubble_sort(a,n);break;
	   case 3: insertion_sort(a,n);break;
	   case 4:MERGE_SORT(a,0,n);break;
	   default: exit(1);
	}
   }
   
}
