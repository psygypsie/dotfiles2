#define DEFINE_FUNC_ATTRIBUTES
#include "nvim/func_attr.h"
#undef DEFINE_FUNC_ATTRIBUTES
#ifndef DLLEXPORT
#  ifdef WIN32
#    define DLLEXPORT __declspec(dllexport)
#  else
#    define DLLEXPORT
#  endif
#endif
DLLEXPORT listitem_T *tv_list_item_remove(list_T *const l, listitem_T *const item) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_watch_add(list_T *const l, listwatch_T *const lw) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_watch_remove(list_T *const l, listwatch_T *const lwrem) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_watch_fix(list_T *const l, const listitem_T *const item) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT list_T *tv_list_alloc(const ptrdiff_t len) FUNC_ATTR_NONNULL_RET;
DLLEXPORT void tv_list_init_static10(staticList10_T *const sl) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_init_static(list_T *const l) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_free_contents(list_T *const l) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_free_list(list_T *const l) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_free(list_T *const l) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_unref(list_T *const l);
DLLEXPORT void tv_list_drop_items(list_T *const l, listitem_T *const item, listitem_T *const item2) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_remove_items(list_T *const l, listitem_T *const item, listitem_T *const item2) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_move_items(list_T *const l, listitem_T *const item, listitem_T *const item2, list_T *const tgt_l, const int cnt) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_insert(list_T *const l, listitem_T *const ni, listitem_T *const item) FUNC_ATTR_NONNULL_ARG(1, 2);
DLLEXPORT void tv_list_insert_tv(list_T *const l, typval_T *const tv, listitem_T *const item);
DLLEXPORT void tv_list_append(list_T *const l, listitem_T *const item) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_append_tv(list_T *const l, typval_T *const tv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_append_owned_tv(list_T *const l, typval_T tv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_list_append_list(list_T *const l, list_T *const itemlist) FUNC_ATTR_NONNULL_ARG(1);
DLLEXPORT void tv_list_append_dict(list_T *const l, dict_T *const dict) FUNC_ATTR_NONNULL_ARG(1);
DLLEXPORT void tv_list_append_string(list_T *const l, const char *const str, const ssize_t len) FUNC_ATTR_NONNULL_ARG(1);
DLLEXPORT void tv_list_append_allocated_string(list_T *const l, char *const str) FUNC_ATTR_NONNULL_ARG(1);
DLLEXPORT void tv_list_append_number(list_T *const l, const varnumber_T n);
DLLEXPORT list_T *tv_list_copy(const vimconv_T *const conv, list_T *const orig, const _Bool deep, const int copyID) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT int tv_list_flatten(list_T *list, long maxdepth) FUNC_ATTR_NONNULL_ARG(1) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT void tv_list_extend(list_T *const l1, list_T *const l2, listitem_T *const bef) FUNC_ATTR_NONNULL_ARG(1);
DLLEXPORT int tv_list_concat(list_T *const l1, list_T *const l2, typval_T *const tv) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT int tv_list_join(garray_T *const gap, list_T *const l, const char *const sep) FUNC_ATTR_NONNULL_ARG(1);
DLLEXPORT _Bool tv_list_equal(list_T *const l1, list_T *const l2, const _Bool ic, const _Bool recursive) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT void tv_list_reverse(list_T *const l);
DLLEXPORT void tv_list_item_sort(list_T *const l, ListSortItem *const ptrs, const ListSorter item_compare_func, _Bool *errp) FUNC_ATTR_NONNULL_ARG(3, 4);
DLLEXPORT listitem_T *tv_list_find(list_T *const l, int n) FUNC_ATTR_PURE FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT varnumber_T tv_list_find_nr(list_T *const l, const int n, _Bool *const ret_error) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT const char *tv_list_find_str(list_T *const l, const int n) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT long tv_list_idx_of_item(const list_T *const l, const listitem_T *const item) FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_PURE;
DLLEXPORT void tv_dict_watcher_add(dict_T *const dict, const char *const key_pattern, const size_t key_pattern_len, Callback callback) FUNC_ATTR_NONNULL_ARG(2);
DLLEXPORT _Bool tv_callback_equal(const Callback *cb1, const Callback *cb2) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT void callback_free(Callback *callback) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void callback_put(Callback *cb, typval_T *tv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void callback_copy(Callback *dest, Callback *src) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT _Bool tv_dict_watcher_remove(dict_T *const dict, const char *const key_pattern, const size_t key_pattern_len, Callback callback) FUNC_ATTR_NONNULL_ARG(2);
DLLEXPORT void tv_dict_watcher_notify(dict_T *const dict, const char *const key, typval_T *const newtv, typval_T *const oldtv) FUNC_ATTR_NONNULL_ARG(1, 2);
DLLEXPORT dictitem_T *tv_dict_item_alloc_len(const char *const key, const size_t key_len) FUNC_ATTR_NONNULL_RET FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_MALLOC;
DLLEXPORT dictitem_T *tv_dict_item_alloc(const char *const key) FUNC_ATTR_NONNULL_RET FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_MALLOC;
DLLEXPORT void tv_dict_item_free(dictitem_T *const item) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT dictitem_T *tv_dict_item_copy(dictitem_T *const di) FUNC_ATTR_NONNULL_RET FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT void tv_dict_item_remove(dict_T *const dict, dictitem_T *const item) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT dict_T *tv_dict_alloc(void) FUNC_ATTR_NONNULL_RET FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT void tv_dict_free_contents(dict_T *const d) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_dict_free_dict(dict_T *const d) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_dict_free(dict_T *const d) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_dict_unref(dict_T *const d);
DLLEXPORT dictitem_T *tv_dict_find(const dict_T *const d, const char *const key, const ptrdiff_t len) FUNC_ATTR_NONNULL_ARG(2) FUNC_ATTR_PURE FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT int tv_dict_get_tv(dict_T *d, const char *const key, typval_T *rettv);
DLLEXPORT varnumber_T tv_dict_get_number(const dict_T *const d, const char *const key) FUNC_ATTR_PURE FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT char **tv_dict_to_env(dict_T *denv);
DLLEXPORT char *tv_dict_get_string(const dict_T *const d, const char *const key, const _Bool save) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT const char *tv_dict_get_string_buf(const dict_T *const d, const char *const key, char *const numbuf) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT const char *tv_dict_get_string_buf_chk(const dict_T *const d, const char *const key, const ptrdiff_t key_len, char *const numbuf, const char *const def) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT _Bool tv_dict_get_callback(dict_T *const d, const char *const key, const ptrdiff_t key_len, Callback *const result) FUNC_ATTR_NONNULL_ARG(2, 4) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT int tv_dict_add(dict_T *const d, dictitem_T *const item) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT int tv_dict_add_list(dict_T *const d, const char *const key, const size_t key_len, list_T *const list) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT int tv_dict_add_tv(dict_T *d, const char *key, const size_t key_len, typval_T *tv);
DLLEXPORT int tv_dict_add_dict(dict_T *const d, const char *const key, const size_t key_len, dict_T *const dict) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT int tv_dict_add_nr(dict_T *const d, const char *const key, const size_t key_len, const varnumber_T nr);
DLLEXPORT int tv_dict_add_float(dict_T *const d, const char *const key, const size_t key_len, const float_T nr);
DLLEXPORT int tv_dict_add_bool(dict_T *const d, const char *const key, const size_t key_len, BoolVarValue val);
DLLEXPORT int tv_dict_add_str(dict_T *const d, const char *const key, const size_t key_len, const char *const val) FUNC_ATTR_NONNULL_ARG(1, 2);
DLLEXPORT int tv_dict_add_str_len(dict_T *const d, const char *const key, const size_t key_len, const char *const val, int len) FUNC_ATTR_NONNULL_ARG(1, 2);
DLLEXPORT int tv_dict_add_allocated_str(dict_T *const d, const char *const key, const size_t key_len, char *const val) FUNC_ATTR_NONNULL_ARG(1, 2);
DLLEXPORT void tv_dict_clear(dict_T *const d) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_dict_extend(dict_T *const d1, dict_T *const d2, const char *const action) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT _Bool tv_dict_equal(dict_T *const d1, dict_T *const d2, const _Bool ic, const _Bool recursive) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT dict_T *tv_dict_copy(const vimconv_T *const conv, dict_T *const orig, const _Bool deep, const int copyID);
DLLEXPORT void tv_dict_set_keys_readonly(dict_T *const dict) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT blob_T *tv_blob_alloc(void) FUNC_ATTR_NONNULL_RET;
DLLEXPORT void tv_blob_free(blob_T *const b) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_blob_unref(blob_T *const b);
DLLEXPORT _Bool tv_blob_equal(const blob_T *const b1, const blob_T *const b2) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT list_T *tv_list_alloc_ret(typval_T *const ret_tv, const ptrdiff_t len) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_NONNULL_RET;
DLLEXPORT dict_T *tv_dict_alloc_lock(VarLockStatus lock) FUNC_ATTR_NONNULL_RET;
DLLEXPORT void tv_dict_alloc_ret(typval_T *const ret_tv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_blob_alloc_ret(typval_T *const ret_tv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_blob_copy(typval_T *const from, typval_T *const to) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT void tv_clear(typval_T *const tv);
DLLEXPORT void tv_free(typval_T *tv);
DLLEXPORT void tv_copy(const typval_T *const from, typval_T *const to);
DLLEXPORT void tv_item_lock(typval_T *const tv, const int deep, const _Bool lock, const _Bool check_refcount) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT _Bool tv_islocked(const typval_T *const tv) FUNC_ATTR_PURE FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_NONNULL_ALL;
DLLEXPORT _Bool tv_check_lock(const typval_T *tv, const char *name, size_t name_len) FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT _Bool var_check_lock(VarLockStatus lock, const char *name, size_t name_len);
DLLEXPORT _Bool tv_equal(typval_T *const tv1, typval_T *const tv2, const _Bool ic, const _Bool recursive) FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_NONNULL_ALL;
DLLEXPORT _Bool tv_check_str_or_nr(const typval_T *const tv) FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_NONNULL_ALL;
DLLEXPORT _Bool tv_check_num(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT _Bool tv_check_str(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT varnumber_T tv_get_number(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT varnumber_T tv_get_number_chk(const typval_T *const tv, _Bool *const ret_error) FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_NONNULL_ARG(1);
DLLEXPORT linenr_T tv_get_lnum(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT float_T tv_get_float(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT int tv_check_for_string(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_PURE;
DLLEXPORT int tv_check_for_nonempty_string(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_PURE;
DLLEXPORT const char *tv_get_string_buf_chk(const typval_T *const tv, char *const buf) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT const char *tv_get_string_chk(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT const char *tv_get_string(const typval_T *const tv) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_NONNULL_RET FUNC_ATTR_WARN_UNUSED_RESULT;
DLLEXPORT const char *tv_get_string_buf(const typval_T *const tv, char *const buf) FUNC_ATTR_NONNULL_ALL FUNC_ATTR_NONNULL_RET FUNC_ATTR_WARN_UNUSED_RESULT;
#include "nvim/func_attr.h"