#include <iostream>

#include <fcntl.h>
#include <stdlib.h>
 
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

using namespace std;

int main (int argc, char *argv[]){

  // passed a search term
  // search through each line and print line if search term is found

  // if no string is passed, print "wgrep: searchterm [file ...]"<<endl;
    // return 1
  // if file cannot be opened print "wgrep: cannot open file"<<endl;
    // return 1

  // if no file, read from STDIN
  // empty string = match with no lines
  return 0;
}
