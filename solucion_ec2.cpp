#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

void solucion_ec2( float dl, string nombreArc);

int main(){

    solucion_ec2("e2_0o01.dat");
    
    return 0;
}

void solucion_ec2( float dl, string nombreArc){
    float dx=dl,dy=dl;
    double plano_old[101][101];
    for (int j=0; j<101; j++){
        if (j>=20+1 && j<=80+1){
            for (int i=0; i<101; i++){
                if (i=40+1){
                    plano[j][i]=-100;
                }else if (i=60+1){
                    plano[j][i]=100;
                }
            }
        }
    }
    ofstream outfile;
    outfile.open(nombreArc);

    double plano_new[101][101];
    float dif_min = 10;
    
    while (dif_min < 1e-8){
        for (int j=1; j<100; j++){
        if !(j>=20+1 && j<=80+1){
            for (int i=1; i<100; i++){
                if !(i=40+1 || i=60+1){
                    plano_new[j][i]=plano_old[j+1][i]+plano_old[j-1][i]+plano_old[j][i+1]+plano_old[j][i-1];
                }
            }
        }
        
    }
    }


    
    outfile.close();
}