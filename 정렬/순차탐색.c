#include <stdio.h>

void seq_search(int a[], int n, int key) {   
   int i;
   for (i=0; i<n; i++) {
      if (key == a[i]) {
         printf("%d 찾았다\n", i+1);
         return;
      }
   }
   printf("못 찾았다\n");
}

main()
{
   int a[]={8,30,1,9,11,2,19};
   int n=7;
   
   seq_search(a,n,9);
   seq_search(a,n,6);
   
   getchar();
}
