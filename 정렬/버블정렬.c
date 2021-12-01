#include <stdio.h>

void asdf(int a[], int n) {
   
   int i, j, temp;
   for (i=0; i<n; i++) {
      for (j=0; j<n-1-i; j++) {
         if (a[j] > a[j+1]) {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
         }
      }
   }
   
   for(i=0; i<n; i++) printf("%d ", a[i]);
}

main()
{
   int a[]={8,30,1,9,11,2,19};
   int n=7;
   
   asdf(a,n);
  
   getchar();
}
