# raylib的C++模板

#### 介绍
可以用这个简单的模板来写C++的raylib程序，请在raylib的github上下载raylib相关文件。目前仅能在直接linux上使用。

#### 安装教程

1.  安装make,gcc
2.  进入raylib仓库主目录的src文件，依次输入make PLATFORM=PLATFORM_DESKTOP,运行完毕后输入sudo make install
3.  进入temple文件夹（修改成自己需要的项目名称），输入make进行测试，成功生成可执行文件即为完成

#### 使用说明

1.  temple文件夹为模板文件，可以更改成项目名称，示例代码可以随便修改
2.  尽量不要动makefile文件，如果添加了新的cpp文件，请在makefile第一行加上文件名.o
3.  windows编译更为复杂，可以用-I指定头文件目录，-L指定库文件目录，-l加载库，但是Windows需要额外加载opengl32，gdi32，winmm三个库