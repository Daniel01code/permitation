#include <stdio.h>
#include <stdlib.h>
void permutation(int a, int b){

    int c;
    c=a;
    a=b;
    b=c;
    printf("les valeur permuté sont %d et %d",a,b);

}
int main()
{
    int x,y;
    printf("saisir deux entire au clavier\n");
    scanf("%d", &x);
    scanf("%d", &y);
    permutation(x,y);
    return 0;
}
