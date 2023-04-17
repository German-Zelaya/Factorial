ECHO est� activado.
#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int num,fac=1;
    cout<<"Introd. número:";
    cin>>número;
    for(int i=1;i<=num;i++){
        fac=fac *i;
    }
    cout<<"\nEl factorial es: "<<fac<<endl;
    system ("pause");
    return 0;
}