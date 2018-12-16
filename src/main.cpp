#include <lua.hpp>

int main() {
    lua_State* state;
#if LUA_VERSION_NUM >= 501
    state = luaL_newstate();
#else
    state = lua_open();
#endif
    luaL_openlibs(state);
    luaL_dostring(state, "print \"Hello world!\"");
    lua_close(state);
}
