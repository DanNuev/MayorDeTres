#include<iostream>
using namespace std;
int main()
{
	do{

	int num1 = 0, num2 = 0, num3 = 0;
	int si = 0;
	
	cout<<"Ingrese numero 1: ";
	cin>>num1;
	
	cout<<"Ingrese numero 2: ";
	cin>>num2;
	
	cout<<"Ingresa numero 3: ";;
	cin>>num3;
	
	if(num2 > num1 && num2 > num3 && num3 > num1)
	{
		cout<<num2<<endl<<num3<<endl<<num1<<endl;
	}
	else if(num3 > num2 && num3 > num1 && num1 > num2)
	{
		cout<<num3<<endl<<num1<<endl<<num2<<endl;
	}
	else if(num2 > num1 && num2 > num3 && num1 > num3)
	{
		cout<<num2<<endl<<num1<<endl<<num3<<endl;
	}
	else if(num1 > num2 && num1 > num3 && num3 > num2)
	{
		cout<<num1<<endl<<num3<<endl<<num2<<endl;
	}
	else if(num3 > num2 && num3 > num1 && num2 > num1)
	{
		cout<<num3<<endl<<num2<<endl<<num1<<endl;
	}
	else
		cout<<num1<<endl<<num2<<endl<<num3<<endl<<":(";
		
			
	}while(1);
	return 0;
}
