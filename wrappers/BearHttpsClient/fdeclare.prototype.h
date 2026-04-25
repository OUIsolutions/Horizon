#if !defined(horizondeps_httpclient_new_ctxt_prototype)
#define horizondeps_httpclient_new_ctxt_prototype
void *horizondeps_httpclient_new_ctxt(void *ctxt, const char *url);
#endif

#if !defined(horizondeps_httpclient_new_prototype)
#define horizondeps_httpclient_new_prototype
void *horizondeps_httpclient_new(const char *url);
#endif

#if !defined(horizondeps_httpclient_set_method_ctxt_prototype)
#define horizondeps_httpclient_set_method_ctxt_prototype
void horizondeps_httpclient_set_method_ctxt(void *ctxt, void *client, const char *method);
#endif

#if !defined(horizondeps_httpclient_set_method_prototype)
#define horizondeps_httpclient_set_method_prototype
void horizondeps_httpclient_set_method(void *client, const char *method);
#endif

#if !defined(horizondeps_httpclient_set_max_redirections_ctxt_prototype)
#define horizondeps_httpclient_set_max_redirections_ctxt_prototype
void horizondeps_httpclient_set_max_redirections_ctxt(void *ctxt, void *client, int max_redirections);
#endif

#if !defined(horizondeps_httpclient_set_max_redirections_prototype)
#define horizondeps_httpclient_set_max_redirections_prototype
void horizondeps_httpclient_set_max_redirections(void *client, int max_redirections);
#endif

#if !defined(horizondeps_httpclient_fetch_ctxt_prototype)
#define horizondeps_httpclient_fetch_ctxt_prototype
void *horizondeps_httpclient_fetch_ctxt(void *ctxt, void *client);
#endif

#if !defined(horizondeps_httpclient_fetch_prototype)
#define horizondeps_httpclient_fetch_prototype
void *horizondeps_httpclient_fetch(void *client);
#endif

#if !defined(horizondeps_httpclient_response_get_status_code_ctxt_prototype)
#define horizondeps_httpclient_response_get_status_code_ctxt_prototype
int horizondeps_httpclient_response_get_status_code_ctxt(void *ctxt, void *response);
#endif

#if !defined(horizondeps_httpclient_response_get_status_code_prototype)
#define horizondeps_httpclient_response_get_status_code_prototype
int horizondeps_httpclient_response_get_status_code(void *response);
#endif

#if !defined(horizondeps_httpclient_response_read_body_ctxt_prototype)
#define horizondeps_httpclient_response_read_body_ctxt_prototype
const unsigned char *horizondeps_httpclient_response_read_body_ctxt(void *ctxt, void *response, long *size);
#endif

#if !defined(horizondeps_httpclient_response_read_body_prototype)
#define horizondeps_httpclient_response_read_body_prototype
const unsigned char *horizondeps_httpclient_response_read_body(void *response, long *size);
#endif

#if !defined(horizondeps_httpclient_response_get_body_size_ctxt_prototype)
#define horizondeps_httpclient_response_get_body_size_ctxt_prototype
long horizondeps_httpclient_response_get_body_size_ctxt(void *ctxt, void *response);
#endif

#if !defined(horizondeps_httpclient_response_get_body_size_prototype)
#define horizondeps_httpclient_response_get_body_size_prototype
long horizondeps_httpclient_response_get_body_size(void *response);
#endif

#if !defined(horizondeps_httpclient_response_get_header_size_ctxt_prototype)
#define horizondeps_httpclient_response_get_header_size_ctxt_prototype
int horizondeps_httpclient_response_get_header_size_ctxt(void *ctxt, void *response);
#endif

#if !defined(horizondeps_httpclient_response_get_header_size_prototype)
#define horizondeps_httpclient_response_get_header_size_prototype
int horizondeps_httpclient_response_get_header_size(void *response);
#endif

#if !defined(horizondeps_httpclient_response_get_header_count_ctxt_prototype)
#define horizondeps_httpclient_response_get_header_count_ctxt_prototype
int horizondeps_httpclient_response_get_header_count_ctxt(void *ctxt, void *response);
#endif

#if !defined(horizondeps_httpclient_response_get_header_count_prototype)
#define horizondeps_httpclient_response_get_header_count_prototype
int horizondeps_httpclient_response_get_header_count(void *response);
#endif

#if !defined(horizondeps_httpclient_set_header_ctxt_prototype)
#define horizondeps_httpclient_set_header_ctxt_prototype
void horizondeps_httpclient_set_header_ctxt(void *ctxt, void *client, const char *key, const char *value);
#endif

#if !defined(horizondeps_httpclient_set_header_prototype)
#define horizondeps_httpclient_set_header_prototype
void horizondeps_httpclient_set_header(void *client, const char *key, const char *value);
#endif

#if !defined(horizondeps_httpclient_set_body_ctxt_prototype)
#define horizondeps_httpclient_set_body_ctxt_prototype
void horizondeps_httpclient_set_body_ctxt(void *ctxt, void *client, unsigned char *content, long size);
#endif

#if !defined(horizondeps_httpclient_set_body_prototype)
#define horizondeps_httpclient_set_body_prototype
void horizondeps_httpclient_set_body(void *client, unsigned char *content, long size);
#endif

#if !defined(horizondeps_httpclient_free_ctxt_prototype)
#define horizondeps_httpclient_free_ctxt_prototype
void horizondeps_httpclient_free_ctxt(void *ctxt, void *client);
#endif

#if !defined(horizondeps_httpclient_free_prototype)
#define horizondeps_httpclient_free_prototype
void horizondeps_httpclient_free(void *client);
#endif

#if !defined(horizondeps_httpclient_response_get_header_value_by_key_ctxt_prototype)
#define horizondeps_httpclient_response_get_header_value_by_key_ctxt_prototype
const char *horizondeps_httpclient_response_get_header_value_by_key_ctxt(void *ctxt, void *response, const char *key);
#endif

#if !defined(horizondeps_httpclient_response_get_header_value_by_key_prototype)
#define horizondeps_httpclient_response_get_header_value_by_key_prototype
const char *horizondeps_httpclient_response_get_header_value_by_key(void *response, const char *key);
#endif

#if !defined(horizondeps_httpclient_response_get_header_key_by_index_ctxt_prototype)
#define horizondeps_httpclient_response_get_header_key_by_index_ctxt_prototype
const char *horizondeps_httpclient_response_get_header_key_by_index_ctxt(void *ctxt, void *response, int index);
#endif

#if !defined(horizondeps_httpclient_response_get_header_key_by_index_prototype)
#define horizondeps_httpclient_response_get_header_key_by_index_prototype
const char *horizondeps_httpclient_response_get_header_key_by_index(void *response, int index);
#endif

#if !defined(horizondeps_httpclient_response_get_header_value_by_index_ctxt_prototype)
#define horizondeps_httpclient_response_get_header_value_by_index_ctxt_prototype
const char *horizondeps_httpclient_response_get_header_value_by_index_ctxt(void *ctxt, void *response, int index);
#endif

#if !defined(horizondeps_httpclient_response_get_header_value_by_index_prototype)
#define horizondeps_httpclient_response_get_header_value_by_index_prototype
const char *horizondeps_httpclient_response_get_header_value_by_index(void *response, int index);
#endif

#if !defined(horizondeps_httpclient_response_free_ctxt_prototype)
#define horizondeps_httpclient_response_free_ctxt_prototype
void horizondeps_httpclient_response_free_ctxt(void *ctxt, void *response);
#endif

#if !defined(horizondeps_httpclient_response_free_prototype)
#define horizondeps_httpclient_response_free_prototype
void horizondeps_httpclient_response_free(void *response);
#endif
