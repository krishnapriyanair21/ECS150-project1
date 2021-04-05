#include <iostream>

#include <fcntl.h>
#include <stdlib.h>
 
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

using namespace std;

int main (int argc, char *argv[]){
  // init vars
  int fd;
  char buffer[4096];
  int ret;
  int bytesRead = 0;
  
  // read file from user and print it's content
  
  //check if file is open
  if (argc == 1){
    fd = STDIN_FILENO;
  }
  //if file is not open, open in read only
  else{
  fd = open(argv[1], O_RDONLY);
  if (fd == -1){
      cerr <<"wcat: cannot open file" << endl;
      return 1;
    }
  }
  while ((ret = read(fd,buffer, 4096)) > 0){
    
  }

  if (argc != 1){
    close(fd);
  }
  return 0;
}
