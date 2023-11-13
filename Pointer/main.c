#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *ptr;
    ptr =&x;
    printf("%d\n",x);
      printf("%d\n",&x);
        printf("%d\n",ptr);
          printf("%d\n",*ptr);
            printf("%d\n",&ptr);
  getch();
}
