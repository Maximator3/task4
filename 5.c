#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main(int argc, char** argv){
    if(argc == 1){
        printf("Print -a for menu\n");
        return 0;
    }
    char* opts = "ab:";
    int opt;
    while((opt = getopt(argc, argv, opts)) != -1 ) {
        switch (opt){
            case 'a':{
                    printf("-a Menu\n");
    		     printf("-b Print name of environment variable\n");
                break;
            }
            case 'b': {
                char* name = optarg;
                char* value = getenv(name);
                printf("%s = %s\n",name,value);
                break;
            }
        }
    }
    return 0;
}
