#include<stdio.h>
int selection_sort(int a[],int n)
{
   printf("*****SELECTION SORT*****\n");
   int i,min1,j,temp,min,i1,flag=0,pass=0;
   for(i=0;i<n;i++)
   {
          min1=a[i];
          flag=0;
          for(j=i;j<n;j++)
          {
                if(min1>a[j])
                {
                    flag=1;
                    min1=a[j];
                    min=j;
                    
                }
          }
          if(flag==1){
          pass++;
          temp=a[min];
          a[min]=a[i];
          a[i]=temp;
          printf("pass %d\n",pass);
          for(i1=0;i1<n;i1++)
          {
              printf("%d ",a[i1]);
          }
          printf("\n");
          }
   }
   printf("Final Result\n");
   for(i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
   printf("\n");
}

int bubble_sort(int a[],int n)
{
   printf("\n******Bubble Sort*****\n");
   int i,j,pass=0,temp,i1,flag=0;
   for(i=0;i<n;i++)
   {
       flag=0;
       for(j=0;j<n-1;j++)
       {
            if(a[j]>a[j+1])
            {
               flag=1;
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               
            }
       }
       if(flag==1)
       {
               pass++;
	       printf("pass %d\n",pass);
	       for(i1=0;i1<n;i1++)
	       {
		      printf("%d ",a[i1]);
	       }
	       printf("\n");
       }
   } 
   printf("\nFinal Result\n");
   for(i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
   printf("\n");

}

int insertion_sort(int a[],int n)
{
   printf("\n******Insertion Sort*****\n");
   int i,j,pass=0,temp,i1,flag=0;
   for(i=1;i<n;i++)
   {
       flag=0;
       for(j=0;j<=i;j++)
       {
            if(a[j]>a[i])
            {
               flag=1;
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
               
            }
       }
       if(flag==1)
       {
               pass++;
	       printf("pass %d\n",pass);
	       for(i1=0;i1<n;i1++)
	       {
		      printf("%d ",a[i1]);
	       }
	       printf("\n");
       }
   } 
   printf("\nFinal Result\n");
   for(i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
   printf("\n");

}
int merge(int a[],int low,int mid,int high)
{
  int i,j,k;
  int n1=mid-low+1;
  int n2=high-mid;
  int l[n1],r[n2];
  
  for(i=0;i<n1;i++)
  {
     l[i]=a[low+i];
  }
  for(j=0;j<n2;j++)
  {
       r[j]=a[mid+1+j];
  }
  i=0,j=0,k=low;
  while(i<n1 && j<n2)
  {
         if(l[i]<=r[j])
         {
           a[k++]=l[i++];
         }
         else
         {
            a[k++]=r[j++];
         }
  }
  while(i<n1)
  {
         a[k++]=l[i++];
  }
  while(j<n2)
  {
      a[k++]=r[j++];
  }
  
  

}
int merge_sort(int a[],int low,int high)
{
    if(low<high)
    {
    int mid=(low+high)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
    }
 

}
int MERGE_SORT(int a[],int low,int high)
{

  merge_sort(a,low,high-1);
  int i;
  printf("Final Result\n");
  for(i=0;i<high;i++)
  {
     printf("%d ",a[i]);
  }
  printf("\n");
}

