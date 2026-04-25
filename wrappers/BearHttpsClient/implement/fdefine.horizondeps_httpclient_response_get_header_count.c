//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../../wrappers/BearHttpsClient/imports/imports.depdeclare.h"
//silver_chain_scope_end

#if !defined(horizondeps_httpclient_response_get_header_count_ctxt_implementation)
#define horizondeps_httpclient_response_get_header_count_ctxt_implementation
int horizondeps_httpclient_response_get_header_count_ctxt(void *ctxt, void *response) {
    BearHttpsResponse *resp = (BearHttpsResponse *)response;
    return BearHttpsResponse_get_headers_size(resp);
}
#endif

#if !defined(horizondeps_httpclient_response_get_header_count_implementation)
#define horizondeps_httpclient_response_get_header_count_implementation
int horizondeps_httpclient_response_get_header_count(void *response) {
    BearHttpsResponse *resp = (BearHttpsResponse *)response;
    return BearHttpsResponse_get_headers_size(resp);
}
#endif
