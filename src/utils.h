#include <Rinternals.h>
#include <bson.h>
#include <mongoc.h>

SEXP mkStringUTF8(const char* str);
SEXP mkRaw(const unsigned char *buf, int len);
bson_t* r2bson(SEXP ptr);
mongoc_collection_t* r2col(SEXP ptr);
mongoc_cursor_t* r2cursor(SEXP ptr);
SEXP bson2r(bson_t* b);
SEXP col2r(mongoc_collection_t *col);
SEXP cursor2r(mongoc_cursor_t* c);
SEXP client2r(mongoc_client_t *client);
void fin_bson(SEXP ptr);
void fin_cursor(SEXP ptr);
void fin_mongo(SEXP ptr);
void fin_client(SEXP ptr);
void mongolite_log_handler (mongoc_log_level_t log_level, const char *log_domain, const char *message, void *user_data);
SEXP ConvertObject(bson_iter_t* iter, bson_iter_t* counter);
