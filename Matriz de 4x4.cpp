#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i;
	int n=0;
	int opcion;
	
for(n;n<1;n++){
	cout<<"Ingrese un valor: ";
	cin>>i;
	cout<<endl;
	
	int mat[4][4]={};//2x2=4 elementos
	mat[0][0]=i;
	mat[1][1]=i;
	mat[0][1]=0;
	mat[1][0]=0;
    mat[2][2]=i;
    mat[3][3]=i;
 
	
	for(int x=0;x<4;x++)//2 numero de filas
	{
		for(int y=0;y<4;y++)//2 numero de columnas
		{
			cout<<mat[x][y]<<" | ";
		}
		cout<<endl<<endl;
	}
	cout<<"Desea ingesar otro valor?\n1.-si\n2.-no\n\n";
	cin>>opcion;
	cout<<endl;
	if(opcion==1){
	n=n-1;
	}
	
}
	return 0;
}
