## 第二节
二进制的一些方案：
vim -b file
:%!xxd 十六进制查看
:%!xxd -r 十六进制恢复文本


### some tools
#### help docs
* head
* tail
* pinfo
* help
* info
* man


#### build tools
compiler assemably link exectuable
c -> as -> 
gcc -g -Wall -save-temps hello.c -o hello


#### hex 
2; 8; 16;
0xd
decimal
* file filetype; file hello
* ldd; link dependence; ldd hello
* hexdump;  hexdump -C hello | head
* strings; strings hello
* ltrace; ltrace hello
* readelf; readelf -h hello; 查看可执行可连接文件格式。
* objdump;  objdump -d file | head 从对象文件里查看信息
* strace; strace -f hello;
* nm; nm hello | tail
* gdb; gdb -q ./hello
很多的书可以看了，太多的历史，太多的资料。

学习的过程中，python java 没有指针的语言很适合学习编程。

https://www.gnu.org/software/c-intro-and-ref/manual/c-intro-and-ref.html#The-First-Example


练习vimtutor zh
emacs 的中文

