#include <stdio.h>
void input(float*base,float*height){
    printtf("enter the base of the triangle:");
    scanf("%f",base);
    printf("enter the height of the triangle:");
    scanf("%f",height);

}


void find_area(float base,float height,float*area){
    *area=(base)*(height)*(0.5);
}

void output(float base,float area,float height){
    printf("the area of the triangle of %f and%f is %f",base,height,area);

}

int main(){


float base ,height, area ;
input (&base,&height);
find_area(base,height,&area);
output(base,height ,area);
return 0;}