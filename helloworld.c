#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(){
	int fd=open("hello1.txt",O_RDONLY);
	if(fd>0){
		char buffer[1000];
		size_t t=read(fd,buffer,100);
		buffer[t]='\0';
		write(1,buffer,strlen(buffer));
		close(fd);	
	}
	return 0;
	
}
