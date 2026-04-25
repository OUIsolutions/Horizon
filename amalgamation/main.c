
#include "../src/imports/imports.fdeclare.h"

int main(int argc,char **argv){
    return horizon_main(argc,argv);
}

#define horizon_main_implementation
int horizon_main(int argc, char** argv){
    return horizon_main_ctxt(horizon_ctxt, argc, argv);
}



#include "../src/imports/imports.fdefine.h"
#include "../wrappers/BearHttpsClient/imports/imports.depdefine.h"
#include "../wrappers/std/imports/imports.depdefine.h"


