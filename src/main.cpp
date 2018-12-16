#include <lua.hpp>

int main() {
    lua_State* state = lua_open();
    luaL_openlibs(state);
    luaL_dostring(state, "print \"Hello world!\"");
    lua_close(state);
}
