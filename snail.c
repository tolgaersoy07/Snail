#include <stdlib.h>
int *snail(int *S,int **M,int R,int C)
{
  int *A=calloc(R*C,4),c=0,i,s=0,r=0;
  for(*S=R*C;s<R*C;r++,c++)
  {
    for(i=r;i<R-r;i++){A[s++]=M[r][i];}s--;if(s>=R*C-1){break;}
    for(i=r;i<R-r;i++){A[s++]=M[i][C-c-1];}s--;if(s>=R*C-1){break;}
    for(i=C-c-1;i>=c;i--){A[s++]=M[R-r-1][i];}s--;if(s>=R*C-1){break;}
    for(i=C-c-1;i>c;i--){A[s++]=M[i][c];}
  }
  return A;
}
