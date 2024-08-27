#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	string nome;
	float nota1,nota2,nota3,resultado;
	
		cout<<"informe o seu nome \n";
		cin>>nome;
		
	cout<<"informe a primeira nota \n";
	cin>>nota1;
	
	cout<<"informe a segunda nota \n";
	cin>>nota2;
	cout<<"informe a terceira nota \n";
	cin>>nota3;
			
				resultado=(nota1+nota2+nota3)/3;
cout 	<<"media \n"<<resultado;
cout    <<"seu nome é:"<<nome;
				
	
	
	
	
	
	return 0;
}
