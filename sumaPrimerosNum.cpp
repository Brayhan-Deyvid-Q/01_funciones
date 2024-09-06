#include <iostream>
using namespace std;

int sumatoria(int num){
	if(num == 0){
		return 0;
	}else{
		return num + sumatoria(num -1);
	}
}

int main(){
	int num;
	int s=0;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>num;
	cout<<endl;
	s = sumatoria(num);
	cout<<"La sumatoria de los "<<num<<" primeros numeros es: "<<s<<endl;
	return 0;
}
