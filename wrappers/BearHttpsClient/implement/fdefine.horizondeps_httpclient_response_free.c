//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../../wrappers/BearHttpsClient/imports/imports.depdeclare.h"
//silver_chain_scope_end

#if !defined(horizondeps_httpclient_response_free_ctxt_implementation)
#define horizondeps_httpclient_response_free_ctxt_implementation
void horizondeps_httpclient_response_free_ctxt(void *ctxt, void *response) {
    BearHttpsResponse *resp = (BearHttpsResponse *)response;
    BearHttpsResponse_free(resp);
}
#endif

#if !defined(horizondeps_httpclient_response_free_implementation)
#define horizondeps_httpclient_response_free_implementation
void horizondeps_httpclient_response_free(void *response) {
    BearHttpsResponse *resp = (BearHttpsResponse *)response;
    BearHttpsResponse_free(resp);
}
#endif
