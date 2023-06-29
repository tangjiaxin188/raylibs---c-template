# raylib的C++模板

#### 介绍
可以用这个简单的模板来写C++的raylib程序，确保你已经安装了raylib,如果没有，请在github上下载，并使用make安装。

#### 安装教程

1.  安装make,gcc
2.  进入主目录的src文件，依次输入make PLATFORM=PLATFORM_DESKTOP,运行完毕后输入sudo（linux环境下加上) make install，windows需要以管理员身份运行cmd
3.  进入temple文件夹（修改成自己需要的项目名称），输入make进行测试，成功生成可执行文件即为完成

#### 使用说明

1.  temple文件夹为模板文件，可以更改成项目名称，示例代码可以随便修改
2.  尽量不要动makefile文件
3.  src为raylib官方文件，可以自行下载官方仓库使用。