#include <stdio.h>
int input_number(){
    int number;
    printf("enter a number");
    scanf("%d",&number);
    return number;

}
int is_composite(int_n){
    if(n<=1){
        return 0;
    }
    for (int i=1,i<=n/2;i++){
        if(n%i ==0){
            return 1;
        }
    }
    return 0;
}
void output(int n,int result){
    if(result){
        printf("%d is a composite number.\n",n);

    }
    else{
        printf("%d is not a composite number.\n",n);
    }
}