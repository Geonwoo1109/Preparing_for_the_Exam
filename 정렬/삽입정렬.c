#include <stdio.h>

void asdf(int a[], int n) {
   int min, i, j, temp;
   for (i=0; i<n; i++) {
      min = i;
      for (j=i+1; j<n; j++) {
         if (a[min] > a[j]) min = j;
      }
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
   for(i=0; i<n; i++) printf("%d ", a[i]);
}

main()
{
   int a[]={8,30,1,9,11,2,19};
   int n=7;
   
   asdf(a,n);
}
