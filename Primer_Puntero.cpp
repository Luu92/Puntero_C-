#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4};
    int *z;
    
    z=a;

    cout<<"Primer Programa compilado GNU y realizado en VsCode"<<endl;

    printf("Elementos del arreglo:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("[%d] ",*(z+i));
    }
    
    return 0;
}
