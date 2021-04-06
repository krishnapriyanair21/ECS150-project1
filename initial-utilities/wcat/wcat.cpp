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
    int i = 0;

    if (argc == 1){
        return 0; // if no file, return 
    }
    else{        
        fd = open(argv[1], O_RDONLY);
        i = 1;
    }

    if (fd == -1){ 
        cerr <<"wcat: cannot open file "<<  endl;
        return 1;
    }

    while ((ret = read(fd,buffer, 4096)) > 0){
        ret = write(STDOUT_FILENO, buffer, ret);
        /// need to loop through opening multiple files
    }

    if (close(fd) < 0){
        cerr<< "wcat: cannot close file" <<endl;
    }

    return 0;
}
