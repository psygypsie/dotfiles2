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
DLLEXPORT char_u *get_function_name(expand_T *xp, int idx);
DLLEXPORT char_u *get_expr_name(expand_T *xp, int idx);
DLLEXPORT const VimLFuncDef *find_internal_func(const char *const name) FUNC_ATTR_WARN_UNUSED_RESULT FUNC_ATTR_PURE FUNC_ATTR_NONNULL_ALL;
DLLEXPORT int call_internal_func(const char_u *const fname, const int argcount, typval_T *const argvars, typval_T *const rettv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT int call_internal_method(const char_u *const fname, const int argcount, typval_T *const argvars, typval_T *const rettv, typval_T *const basetv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT buf_T *tv_get_buf(typval_T *tv, int curtab_only);
DLLEXPORT buf_T *tv_get_buf_from_arg(typval_T *const tv) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT buf_T *get_buf_arg(typval_T *arg);
DLLEXPORT void f_getmousepos(typval_T *argvars, typval_T *rettv, FunPtr fptr);
DLLEXPORT void f_prompt_getprompt(typval_T *argvars, typval_T *rettv, FunPtr fptr) FUNC_ATTR_NONNULL_ALL;
DLLEXPORT long do_searchpair(const char *spat, const char *mpat, const char *epat, int dir, const typval_T *skip, int flags, pos_T *match_pos, linenr_T lnum_stop, long time_limit) FUNC_ATTR_NONNULL_ARG(1, 2, 3);
DLLEXPORT void f_string(typval_T *argvars, typval_T *rettv, FunPtr fptr);
#include "nvim/func_attr.h"
