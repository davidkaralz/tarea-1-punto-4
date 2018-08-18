#include <iostream>
#include <string>

using namespace std;
int main()
{
     int a, dig1, dig2, dig3, dig4, dig5, residuo;
     
     cout<<"Ingrese un numero de 5 digitos"<<endl;
     cin>>a;
     
     dig1=a/10000;
     residuo=a%10000;
     dig2=residuo/1000;
     residuo=residuo%1000;
     dig3=residuo/100;
     residuo=residuo%100;
     dig4=residuo/10;
     residuo=residuo%10;
     dig5=residuo;
     
     cout<<"El numero es:  "<<dig1<<"   "<<dig2<<"   "<<dig3<<"   "<<dig4<<"   "<<dig5<<"   ";
     
     return 0;
}
