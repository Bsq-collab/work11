#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <dirent.h>
#include <signal.h>
#include <string.h>

char ** parse_args(char* line){
  char ** retans = malloc(10* sizeof(char*));
  int i=0;
  while(line){
    retans[i]=strsep(&line," ");
    printf("retans[%d]= %s\n",i,retans[i]);
    printf("line:%s\n",line);
    printf("\n\n\n\n");
    i+=1;
  }
  return retans;
}

int main(){

  /*char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  */
  char line[100] = "ls -a -l";

  char ** args = parse_args( line );
  execvp(args[0], args);
}
