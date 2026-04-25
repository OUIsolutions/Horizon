//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../../wrappers/BearHttpsClient/imports/imports.depdeclare.h"
//silver_chain_scope_end

#if !defined(horizondeps_httpclient_response_get_status_code_ctxt_implementation)
#define horizondeps_httpclient_response_get_status_code_ctxt_implementation
int horizondeps_httpclient_response_get_status_code_ctxt(void *ctxt, void *response) {
    BearHttpsResponse *resp = (BearHttpsResponse *)response;
    return BearHttpsResponse_get_status_code(resp);
}
#endif

#if !defined(horizondeps_httpclient_response_get_status_code_implementation)
#define horizondeps_httpclient_response_get_status_code_implementation
int horizondeps_httpclient_response_get_status_code(void *response) {
    BearHttpsResponse *resp = (BearHttpsResponse *)response;
    return BearHttpsResponse_get_status_code(resp);
}
#endif
