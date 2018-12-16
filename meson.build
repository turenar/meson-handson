project(
  'luatoasobu', 'cpp',
  default_options: ['warning_level=3'])

# pkg-configが使えるライブラリなどは、dependency()で
# インクルードディレクトリやリンクするライブラリなどを適切に設定できるようになります。
lua_dep = dependency('lua')

# pkg-configが使えない場合は、find_library()やinclude_directories()などを使う必要があるかもしれません

subdir('src')
