# libraryでライブラリを定義します。
# ただのlibrary()の場合はデフォルトでshared library (.soなど) が作られます。
# meson build/ -Dbuildtype=staticやmeson configure -Dbuildtype=staticでstatic library (.a) が作られるようにも出来ます。

perfectcalc_lib = library(
    'perfectcalc', ['plus.cpp'],
    include_directories: includes)
