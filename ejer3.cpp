#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int multiplicacion(int mat1[][3],int mat2[][3],int nf,int nc){
    if((nf==0) && (nc==0)){
        return mat1[nf][nc]+mat2[nf][nc];
    }else{
        if(nf>-1){
            nc--;
            if(nc>-1){
                return mat1[nf][nc+1]*mat2[nf][nc+1]+multiplicacion(mat1,mat2,nf,nc);
            }else{
                return multiplicacion(mat1,mat2,nf-1,2);
            }
        }
    }
}
int main(){
int mat1[3][3],mat2[3][3];

srand(time(NULL));

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        mat1[i][j]=(int)((rand()/32767.1)*1000);
        mat2[i][j]=(int)((rand()/32767.1)*1000);
    }
}


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<mat1[i][j]<<"-";

    }
    cout<<endl;
}


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<mat2[i][j]<<"-";

    }
    cout<<endl;
}
cout<<"la multiplicacion es: "<<multiplicacion(mat1,mat2,2,2);
_getch();
}

