#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u0=0;
    int u1=1;
    int n;
    int u;
up:
    printf("entrer n :");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        u=u0+u1;
        u0=u1;
        u1=u;
    }
    if(n==0){
        u=0;
    }
    if(n==1){
        u=1;
    }
    printf("U(%d)=%d\n",n,u);
    u0=0;
    u1=1;
     goto up;
    return 0;
}
