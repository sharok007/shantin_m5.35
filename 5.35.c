#include <stdio.h>
#include <stdlib.h>
void G(float *a, int n) 
{ 
 	a = (float*)malloc(n*sizeof(float));
 	float c_max,c_min;
	int i;
	printf("Введите элементы массива:\n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
 	 c_max = a[0];
 	 c_min = a[0]; 
	for(i=0;i<n;i++){
 		if(a[i]>c_max)
 		 {
 		     c_max=a[i];
 	  	 }
	}
	for(i=0;i<n;i++){
 	   if(a[i]<c_min)
 	   {
 	     c_min=a[i];
 	   }
	}
	system("clear");
	for(i=0;i<n;i++)
		printf("%0.2f; ",a[i]);
 	printf("\n");
 	printf("max=%0.2f,min=%0.2f\n ", c_max,c_min);
	free(a);
}
int main()
{
	 system("clear");
	 int n,i;
	 float *a;
	 float *x;
	 float *y;
	 printf("1.Для n элементов\n2.Для 25 элементов\n3.Для 40 элементов\n");
	 scanf("%d",&i); 
	 switch(i){ 
				case 1:printf("Введите число элементов:\n");
					 	scanf("%d", &n);
						G(a,n);
						break;
				case 2:G(x,25);
						break;
				case 3:G(y,40);
						break;
	}
	return 0;
}
