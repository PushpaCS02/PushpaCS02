#include <stdio.h>
void square(int n);

int main()
{
    int no =4;
    square(no);
    printf("number %d\n",no);
    return 0;

}
//call by value
void square(int n){
    n=n*n;
    printf("Square = %d \n",n);
    
}
