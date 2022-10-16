#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/utsname.h>

int main(){
	char* name = (char*)malloc(100 * sizeof(char));
	struct utsname comp;
	gethostname(name, 100);
	printf("%s\n", name);
	printf("host_id = %d\n", gethostid());
	if(uname(&comp) != 0){
		printf("err sys!!");
	}else{
		printf("Sysname = %s\n", comp.sysname);
		printf("Nodename = %s\n", comp.nodename);
		printf("Realese = %s\n", comp.release);
		printf("Version = %s\n", comp.version);
		printf("Machine = %s\n", comp.machine);
	}
free(name);
}