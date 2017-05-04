#include<iostream>
#include <cstdlib>

using namespace std;

void G(float *a,int n)
{
	a=new float[n];
	int i;
	cout<<"Введите элементы массива:";
	for(i=0;i<n;i++)
		cin>>a[i];
	float min=a[0];
	float max=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min)
			min=a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	system("clear");
	for(i=0;i<n;i++)
		cout<<" "<<a[i]<<";";
	cout<<endl<<"Максимальное значение:"<<max<<endl<<"Минимальное значение:"<<min<<endl;
	delete [] a;
}
int main()
{
	system("clear");
	float *x,*y,*a;
	int n;
	cout<<"1.Для n элементов\n2.Для 25 элементов\n3.Для 40 лементов\n";
	int i;
	cin>>i;
	switch(i)
	{
		case 1:cout<<"Введите количество элементов:"<<endl; 	
				cin>>n;
				G(a,n);
				break;
		case 2:G(x,25);
				break;
		case 3:G(y,40);
				break;	
	}
	return 0;
}
