-#include<stdio.h>
#include<stdlib.h>
int main(){
	char buffer[200];
	FILE* fptr1=fopen("file1.txt","r");
	FILE* fptr2=fopen("copy.txt","w");
	while(fgets(buffer,200,fptr1)!=NULL){
		fprintf(fptr2,"%s",buffer);
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
