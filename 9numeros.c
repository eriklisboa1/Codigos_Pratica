#include <stdio.h>

int main(void) {

int a,b;
int i;
int ordem;


scanf("%d %d", &a ,&b);

if( a <= b)
    ordem = 1;
else
    ordem = -1;

for ( i= a; i != b + ordem ; i = i + ordem ){
    printf("%d", i);
}
return 0;
}
