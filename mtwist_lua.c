#include "lua.h"
#include "lauxlib.h"
#include "mtwist.c"

static int luamt_seed( lua_State *L ){
    uint32_t number = luaL_optint(L, 1, 0);
    mt_seed32new(number);
	return 1;
}

static int luamt_rand( lua_State *L ){
    double rand_value = mt_drand();
    lua_pushnumber(L, rand_value);
	return 1;
}

/* table of operations */
static const struct luaL_reg mtwist [] = {
	{"seed", luamt_seed},
	{"rand", luamt_rand},
	{NULL, NULL}
};

/* register library */
LUALIB_API int luaopen_mtwist( lua_State *L ){
  luaL_openlib( L, "mtwist", mtwist, 0 );
  return 1;
}

