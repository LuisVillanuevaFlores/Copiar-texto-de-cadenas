#include <iostream>
using namespace std;
int tam(char*c){
	char*a;
	a=c;
	while(*c!='\0'){
		c++;
	}
	return c-a;
}

int tam2(char cad[]){
    int i=0;
    while(cad[i]!='\0'){
        i++;
    }
return i;
}

//USANDO PUNTEROS
char *coppun(char*cad1,char*cad2)
{
    int x=tam(cad2);
    int y=tam(cad1);
    if(y<=x){
    for(int i=0;i<y;i++){
        *(cad2)=*(cad1);
         cad2++;cad1++;}
         cout<<endl;*cad2='\0';cad2-=y;return cad2;}

    else{cout<<"Tamaño excedido para ser copiado"<<endl;}

}

//USANDO ARREGLOS

char *coparr(char cad1[],char cad2[]){


    int x=tam2(cad2);
    int y=tam2(cad1);
    if(y<=x){
        for(int i=0;i<x;i++){cad2[i]=cad1[i];}return cad2;}

    else{cout<<"Tamaño excedido para ser copiado"<<endl;}

}






int main()
{
    char *st1=new char(100);
    char *st2=new char(100);
    cin>>st1;
    cin>>st2;
    cout<<coppun(st1,st2)<<endl;
    char cadena1[]={"cuatro"};
    char cadena2[]={"amigocomoestasbien"};
    cout<<coparr(cadena1,cadena2);
    delete(st1);
    delete (st2);


   return 0;
}
