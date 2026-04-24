
#include "../src/imports/imports.fdeclare.h"

int main(int argc,char **argv){
    return horizon_main(argc,argv);
}

#include <stdio.h>
#define horizon_main_implementation
int horizon_main(int argc, char** argv){
    printf("Hello, World! 2\n");
    return 0;
}

#include "../src/imports/imports.fdefine.h"
#include "../wrappers/BearHttpsClient.c"
#include "../wrappers/CArgvParse.c"
#include "../wrappers/CWebStudio.c"
#include "../wrappers/std.c"


