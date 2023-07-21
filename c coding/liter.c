#include <stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int k,l,m;
      scanf("%d %d %d",&k,&l,&m);
      if(k<l)
      {
        printf("%d",k);
      }
       else if(l<m)
       {
        printf("%d",l);
       }
       else
       {
         printf("%d",m);
       }
       return 0;
       }
      }
