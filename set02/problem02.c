#include <stdio.h>
int input_side(){
    int side;
    printf("enter the length of a side:");
    scanf("%d",&side);
    return side;

}
int check_scalene(int a,int b,int c){
    return(a !=b && a != c && b != c);

}
void output(int a,int b,int c,int isscalene){
    if(isscalene)
    {
        printf("the triangle with sides %d,%d and %d is scalene",a,b,c);
    }
    else{
pritf ("the triangle with sides %d,%d and %d is scalene",a,b,c);
    }
}
int main(){
    printf("enter the length of the three sides of the triangle:\n");
    a=input_side();
    b=input_side();
    c=input_side();
    int scalene =check_scalene(a,b,c);
    output(a,b,c,scalene);
    return 0;
}