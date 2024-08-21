#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(){
	mode_t mode=S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IROTH;
	int fd=creat("file_new.txt",mode);
	close(fd);
	if(fd>0){
        int fd1=open("file1.txt",O_RDONLY);
	    int fd2=open("file_new.txt",O_WRONLY);
		if(fd1>0 && fd2>0){
		   char buffer[1000];
		   char sentence[1000];
		   int charptr=0;
		   size_t bytesread=0;
           while((bytesread=read(fd1,buffer,100))>0){
		   	for(int i=0;i<bytesread;i++){
			   sentence[charptr++]=buffer[i];
			   if(buffer[i]=='\n'){
					sentence[charptr]='\0';
					write(fd2,sentence,strlen(sentence));
					charptr=0;
			    }
            }
		  }
		  if(charptr>0){
			sentence[charptr++]='\n';
			sentence[charptr]='\0';
			write(fd2,sentence,strlen(sentence));
		  }
		  close(fd1);
		  close(fd2);
		}else{
			printf("file not opened\n");
		}
	}else{
		printf("file not created\n");
	}
	return 0;
}
