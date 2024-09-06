#include <iostream>
using namespace std;

int factorial(int);

int main(){
	int num;
	int s=0;
	cout<<"Ingrese el valor del que se quiere conocer su factorial: ";
	cin>>num;
	cout<<endl;
	s = factorial(num);
	cout<<"El factorial de "<<num<<" es: "<<s<<endl;
	return 0;
}

int factorial(int num){
	if(num == 0){
		return 1;
	}else{
		return num * factorial(num - 1);
	}
}