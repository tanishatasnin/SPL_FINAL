Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore

@tanishatasnin
limon-291
/
File_codes
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
File_codes/File/file.c
@limon-291
limon-291 Update file.c
Latest commit 53061a8 yesterday
 History
 1 contributor
88 lines (67 sloc)  1.73 KB



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    char Name[20];
    int id[10];
    float cgpa;
}st;

void filewrite(st s[],int n){

    FILE *fptr;
    fptr=fopen("Student.txt","w");

    if(fptr==NULL){
        printf("\nFile doesn't exist");
    }
    else{
        printf("\nFile is opened.\n");

        for(int i=0;i<n;i++){

        printf("\nEnter student[%d] name: \n",i+1);
        fflush(stdin);
        gets(s[i].Name);
        fprintf(fptr,"Name :  ");
        fputs(s[i].Name,fptr);
        fprintf(fptr,"\n");

        printf("\nEnter student[%d] id: \n",i+1);
        fflush(stdin);
        gets(s[i].id);
        fprintf(fptr,"ID :  ");
        fputs(s[i].id,fptr);
        fprintf(fptr,"\n");

        printf("\nEnter Student[%d] Cgpa: \n",i+1);
        fflush(stdin);
        scanf("%f",&s[i].cgpa);
        fprintf(fptr,"CGPA :  ");
        fprintf(fptr,"%f\n",s[i].cgpa);
        fprintf(fptr,"\n-------------------\n\n");
        printf("\n\n");

    }

    printf("\n\nData stored in file successfully\n\n");
    }

    fclose(fptr);

}

void file_data_print(st s[],int n){
    FILE *fptr;
    fptr=fopen("Student.txt","r");
    char ch;

    if(fptr==NULL){
        printf("\nFile doesn't exist");
    }
    else{
        printf("\nPrinting Data please be patient.....\n\n\n");

        while(!feof(fptr)){
            ch=fgetc(fptr);
            printf("%c",ch);
        }
    }
    fclose(fptr);
}


int main(){
    system("cls");
    int n;
    printf("\nHow many students? \n");
    scanf("%d",&n);
    st studnt[n];

    filewrite(studnt,n);
    file_data_print(studnt,n);

    return 0;
}
