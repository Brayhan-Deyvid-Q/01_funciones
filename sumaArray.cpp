#include <iostream>
using namespace std;

int sum (int x[], int n){
	if(n==0){
		return x[n];
	}else{
		return x[n] + sum(x, n-1);
	}
}

int main(){
	int s;
	const int a = 5;
	int array[a] = {1, 2, 3, 4, 5};
	cout<<"La suma de los elementos del arreglo es: ";
	s= sum(array, a);
	cout<< s << endl;
	return 0;
}