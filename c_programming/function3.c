#include <stdio.h>
void greet(char a)
{
    if(a=='i')
    {
        printf("Namaste");
    }
    else 
        printf("Bonjour");
}
int main()
{
    printf("enter f for french and i for indian \n");
    char a ;
    scanf("%c",&a);
    greet(a);


}