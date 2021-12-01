#include <stdio.h>

void seq_search(int a[], int n, int key) {
   int l=1, r=n, m, i;
   m = (l+r) / 2;
   
   for (i=0; i<n; i++) {
      
      if (a[m] > key) r = m-1;
      else if (a[m] < key) l = m+1;
      else {
         printf("%d", m+1);
         return;
      }
      m = (l+r) / 2;
   }
}

main()
{
   int a[]={1, 3, 5, 7, 9, 11, 13};
   int n=7;
   
   seq_search(a,n,3);
   seq_search(a,n,11);
   
   //getchar();
}
