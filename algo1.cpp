// U(n) = 2U(n-1) + 3U(n-3) with n>2 , U0 = 0 ; U1 = 1 ; U2 = 2 
#include <stdio.h>

int main() {
    int x=0,y=1,z=2,u,i,n;
    printf("Donnez la valeur du n: ");
    scanf("%d",&n);
    for(i=3;i<=n;i++){
        u=z+x;
        x=y;
        y=z;
        z=u;
    }
    switch(n){
    case 0: u=x;
    break;
     case 1: u=y;
    break;
     case 2: u=z;
    break;
    }
    printf("UN= %d",u);
}
