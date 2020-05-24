//by:Ivan Prado
#include<iostream>
#include<iomanip>
using namespace std;

void ImprimirArreglo(int *pD, unsigned int n);

int main ()
{
  unsigned int n=0;
  int *pA=nullptr;

  srand(time(nullptr));
  cout << "Número de elementos: ";
  cin >> n;
  //vamos a pedir espacio en el heap para el ImprimirArreglo
  pA= new int [n];
  //generamos aleatoriamente los datos al arrary
  for(size_t i=0; i<n; i++)
   pA[i] = rand()%10;
   ImprimirArreglo(pA,n);

//cuantas veces se repite contar
unsigned int x=0, contar=0;
cout << "\n\nDato a buscar: ";
cin>> x;
for(size_t i=0; i<n; i++){
  if (pA[i]==x)
  contar=contar+1;
}
//buscamos la posicion
if (contar!=0){ 
int *pO=new int [n], contador2=0;

for(size_t i=0; i<n; i++){
  if(pA[i]==x){
    pO[contador2]=i;
    contador2=contador2+1;
  }
}
cout<< "\nSe encontraron: " << contar << " veces \n" << "En la posicion: ";
for(size_t i=0; i<contar; i++){
  cout << pO [i] << " ";

}
delete []pO;
pO=nullptr;
}
else 
{
   cout<<"El dato no esta en el array";
}

delete []pA;
pA=nullptr;

return 0;
}
void ImprimirArreglo(int *pD, unsigned int n){
  for(size_t i=0; i<n; i++){
    cout << setw (5) << pD[i];
  }
}