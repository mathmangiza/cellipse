#include<stdio.h>
#include<math.h>
int main(){
int a;
int b;
printf("enter a :\n");
scanf("%d",&a);
printf("enter b :\n");
scanf("%d",&b);
if (a!=b && pow(a,2)>pow(b,2) && pow(b,2 )>0){
       printf("ellipse\n");
}else{			
     printf("not an ellipse\n");
	return 0;
}
}

