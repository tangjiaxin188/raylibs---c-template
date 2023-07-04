cmake_minimum_required(VERSION 3.0) #cmake版本指定

project(raylibtemple) #项目名称指定

include_directories(./head) #头文件目录指定

link_directories(./lib) #库目录指定

add_compile_options(-std=c++11) #参数指定

aux_source_directory(./src SRO) #源文件指定

add_executable(mygame ${SRO}) #将源文件编译成可执行文件，可执行文件名称为mygame

target_link_libraries(mygame raylib)#链接raylib库