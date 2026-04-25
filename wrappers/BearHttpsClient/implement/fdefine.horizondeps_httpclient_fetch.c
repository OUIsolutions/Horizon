//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../../wrappers/BearHttpsClient/imports/imports.depdeclare.h"
//silver_chain_scope_end

#if !defined(horizondeps_httpclient_fetch_ctxt_implementation)
#define horizondeps_httpclient_fetch_ctxt_implementation
void *horizondeps_httpclient_fetch_ctxt(void *ctxt, void *client) {
    BearHttpsRequest *request = (BearHttpsRequest *)client;
    return (void *)BearHttpsRequest_fetch(request);
}
#endif

#if !defined(horizondeps_httpclient_fetch_implementation)
#define horizondeps_httpclient_fetch_implementation
void *horizondeps_httpclient_fetch(void *client) {
    BearHttpsRequest *request = (BearHttpsRequest *)client;
    return (void *)BearHttpsRequest_fetch(request);
}
#endif
