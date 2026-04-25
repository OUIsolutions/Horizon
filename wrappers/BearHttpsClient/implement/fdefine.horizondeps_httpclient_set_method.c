//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../../wrappers/BearHttpsClient/imports/imports.depdeclare.h"
//silver_chain_scope_end

#if !defined(horizondeps_httpclient_set_method_ctxt_implementation)
#define horizondeps_httpclient_set_method_ctxt_implementation
void horizondeps_httpclient_set_method_ctxt(void *ctxt, void *client, const char *method) {
    BearHttpsRequest *request = (BearHttpsRequest *)client;
    BearHttpsRequest_set_method(request, method);
}
#endif

#if !defined(horizondeps_httpclient_set_method_implementation)
#define horizondeps_httpclient_set_method_implementation
void horizondeps_httpclient_set_method(void *client, const char *method) {
    BearHttpsRequest *request = (BearHttpsRequest *)client;
    BearHttpsRequest_set_method(request, method);
}
#endif
