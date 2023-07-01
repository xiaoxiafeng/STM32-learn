# 魔术棒设置

## Target

Xtal(MHz) 设置晶振频率

Code Generation-->ARM Compiler  设置编译器版本
|对比项|AC5|AC6|说明|
|----|----|---|---|
|中文支持|较好|较差|AC6对中文支持极差，goto definition无法使用，误报等|
|代码兼容性|较好|较差|AC6对某些代码优化可能导致运行异常，需要慢慢调试|
|编译速度|较慢|较快|AC6编译速度比AC5快|
|语法检查|一般|严格|AC6语法检查非常严格，代码严谨性较好|

选择编译器的方法
|选项卡|AC5|AC6|说明|
|---|---|---|---|
|Target|选择AC5|选择AC6|选择相应的编译器|
|C/C++|无需设置|Misc Controls设置：-Wno-invalid-source-encoding|AC6需要设置编译选项以关闭对汉字的错误警告，AC5则不需要|

Output
Select Folder Objects修改输出文件地址
选择上Create HEX File输出HEX文件

Listing
Select Folder Listing修改输出文件地址

C/C++
Define 设置全局宏定义
Optimization 选择优化等级（-O1）
选择C99模式
Include Paths 设置头文件路径

Debug
推荐选择DAP,根据自己的下载器按需选择
里面的接口选择SW

Utilities
Settings进行选择上Reset and Run 下载后自动复位
