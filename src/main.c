//
// Created by chorm on 2020-05-04.
//

#define _GNU_SOURCE 1
#include <string.h>

enum{
    LCSH_NATIVE = 0,
    LCSH_BASH = 1,
    LCSH_SH_ONLY = 2
};



int main(int argc,char** argv){
    int mode;

    if(strcmp(basename(argv[0]),"sh")==0)
        mode = LCSH_SH_ONLY;
    else if(strcmp(basename(argv[0]),"bash")==0)
        mode = LCSH_BASH;
    else
        mode = LCSH_NATIVE;
}
