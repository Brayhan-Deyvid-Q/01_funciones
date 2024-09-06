#include <iostream>
using namespace std;

int com (int n, int k){
	if(n==k){
		return 1;
	}else{
		if(k==1){
			return n;
		}else{
			return com(n-1, k-1) + com(n-1, k);
		}
	}
}

int main(){
	int n, k;
	int r;
	cout<<"Ingrese el valor n de la combinatoria: ";
	cin>>n;
	cout<<endl;
	cout<<"Ingrese el valor k de la combinatoria: ";
	cin>>k;
	cout<<endl;
	r = com(n,k);
	cout<<"La combonatoria es: "<<r<<endl;
}