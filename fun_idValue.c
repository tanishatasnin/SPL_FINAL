#include<stdio.h>

int takeInput(int idvalue[], int size){
for(int i=0; i<size ; i++){
    scanf("%d",&idvalue);
}
return idvalue;
}

int elementProd(int arr[], int size){

int multy=1;
for(int i=0 ; i<size; i++){
 multy*=arr[i];
printf("Multy=%d",multy);
}

return multy;
}

int main(){
    int  size=4;
    int idValue[size];

for(int i=0 ; i<size; i++){
    idValue[i]=((1500%11)+3*i);
}

 printf("Sum= %d\n",takeInput(idValue,size));
 //takeInput(idValue,size);
 printf("Sum= %d\n",elementProd(idValue,size));
return 0;
}
