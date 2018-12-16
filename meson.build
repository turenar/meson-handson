# c++のソースコードの場合はcppを2つ目の引数に渡します
project(
  'calculator', 'cpp',
  default_options: ['warning_level=3'])
# ↑名前付きの引数を渡すときは、名前も書く必要があります。
# どういう引数が渡せるかは https://mesonbuild.com/Reference-manual.html#project を見ましょう。
# default_optionsとして渡せるオプションは、ビルドディレクトリの中でmeson configureで一覧が見えます。


# includeディレクトリをincludeできるように、include_directoriesオブジェクトを作成します。(ただの呪文です)
includes = include_directories('include')


# subdir()で別のディレクトリのmeson.buildを読み込むことが出来ます。
subdir('src')
