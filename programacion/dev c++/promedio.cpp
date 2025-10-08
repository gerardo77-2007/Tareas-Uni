#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int MAT;
	float PRO,CAL1,CAL2,CAL3,CAL4,CAL5;
	
	cout<<"hola etse programa da el promedio"<< "\n";

	cout<<"ingresa la matricula"<< "\n";
	cin >>MAT;
	
	cout<<"ingrese la primera calificacion 1"<< "\n";
	cin>>CAL1;
	
	cout<<"ingrese la primera calificacion 2"<< "\n";
	cin>>CAL2;

	
	cout<<"ingrese la primera calificacion 3"<< "\n";
	cin>>CAL3;

	
	cout<<"ingrese la primera calificacion 4"<< "\n";
	cin>>CAL4;

	
	cout<<"ingrese la primera calificacion 5"<< "\n";
	cin>>CAL5;
	
	PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	
	printf("\n El promedio del alumno con matricula %d es %5.2f \n ", MAT,PRO);
	cout<<"\n el promedio del alumno con matricula" <<MAT << "es" << PRO<< "\n";
	return 0;

}
