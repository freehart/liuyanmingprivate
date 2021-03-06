# sublile 入门
#### 一、安装：登录官网下载合适的安装包，http://www.sublimetext.com/3

#### 二、插件安装：

*   安装package control组件，然后直接在线安装：
*   按Ctrl+`调出console（注：避免热键冲突)
*   粘贴以下代码到命令行并回车：

        import urllib.request,os; pf = 'Package Control.sublime-package'; ipp = sublime.installed_packages_path(); urllib.request.install_opener
        ( urllib.request.build_opener( urllib.request.ProxyHandler()) ); openos.path.join(ipp, pf), 'wb').write(urllib.request.urlopen
        ( 'http://sublime.wbond.net/' + pf.replace(' ','%20')).read())
  
*   重启Sublime Text 3。
*   4. 如果在Perferences->package settings中看到package   
      control这一项，则安装成功。

### 三、C语言必备插件：
* C Improved：更加人性化的C语言着色方案。
* AllAutocomplete：Sublime自带的可以对当前文件中的变量和函数名进行自动提示，但
  是AllAutocomplete可以对打开的所有文件的变量名进行提示，增强版的代码自动提示符。
* ConvertToUTF8：该插件可以显示与编辑 GBK, BIG5, EUC-KR, EUC-JP, Shift_JIS 
  等编码的文件
* SideBarEnhancements ：插件可以大大加强在侧栏目录树中右键的选项
* SublimeClang: sublime 多的C语言代码补全插件，有语法检查功能，只要你包含了指定的
  头文件就可以在代码中输入一些关键字就可以看到补全的代码了。
* Ctags: 
    * 1ackage control中安装插件
    * 2.下载ctags可执行程序，路径为http://prdownloads.sourceforge.net/ctags/ctags
    58.zip，解压到一个目录,注意要是纯ASCII字符的目录不要带空格或中文命名的目。
    * 3	打开菜单在Preferences菜单中打开Package settings->ctags->settings-user和settings-default
    把default中的配置全部复制到user中，然后改一下command配置项，为ctags的可执行文件路径
    * 4、如果喜欢用快捷键操作，控制函数的跳转，可以打开Preferences->Package Settings->ctags->Key Bindings-User，并编辑这个文件，当然，如果不知道格式，可以将Key Bindings-Default里面的内容copy过来，然后修改某些命令的值
  
我的内容如下：

      [
      {
      "command": "navigate_to_definition",
    			     "keys": ["ctrl+t"]
      },
      {
      "command": "jump_back",
    			     "keys": ["alt+,"]
      },
      ]

### 四：快键键：
Sublime Text 3 快捷键总结（拿走）
Sublime Text 3 快捷键总结（拿走）

[https://www.douban.com/note/362268947/](https://www.douban.com/note/362268947/)

#### 选择类

Ctrl+D 选中光标所占的文本，继续操作则会选中下一个相同的文本。

Alt+F3 选中文本按下快捷键，即可一次性选择全部的相同文本进行同时编辑。举个栗子：快速选中并更改所有相同的变量名、函数名等。

Ctrl+L 选中整行，继续操作则继续选择下一行，效果和 Shift+↓ 效果一样。

Ctrl+Shift+L 先选中多行，再按下快捷键，会在每行行尾插入光标，即可同时编辑这些行。

Ctrl+Shift+M 选择括号内的内容（继续选择父括号）。举个栗子：快速选中删除函数中的代码，重写函数体代码或重写括号内里的内容。

Ctrl+M 光标移动至括号内结束或开始的位置。

Ctrl+Enter 在下一行插入新行。举个栗子：即使光标不在行尾，也能快速向下插入一行。

Ctrl+Shift+Enter 在上一行插入新行。举个栗子：即使光标不在行首，也能快速向上插入一行。

Ctrl+Shift+[ 选中代码，按下快捷键，折叠代码。

Ctrl+Shift+] 选中代码，按下快捷键，展开代码。

Ctrl+K+0 展开所有折叠代码。

Ctrl+← 向左单位性地移动光标，快速移动光标。

Ctrl+→ 向右单位性地移动光标，快速移动光标。

shift+↑ 向上选中多行。

shift+↓ 向下选中多行。

Shift+← 向左选中文本。

Shift+→ 向右选中文本。

Ctrl+Shift+← 向左单位性地选中文本。

Ctrl+Shift+→ 向右单位性地选中文本。

Ctrl+Shift+↑ 将光标所在行和上一行代码互换（将光标所在行插入到上一行之前）。

Ctrl+Shift+↓ 将光标所在行和下一行代码互换（将光标所在行插入到下一行之后）。

Ctrl+Alt+↑ 向上添加多行光标，可同时编辑多行。

Ctrl+Alt+↓ 向下添加多行光标，可同时编辑多行。

#### 编辑类

Ctrl+J 合并选中的多行代码为一行。举个栗子：将多行格式的CSS属性合并为一行。

Ctrl+Shift+D 复制光标所在整行，插入到下一行。

Tab 向右缩进。

Shift+Tab 向左缩进。

Ctrl+K+K 从光标处开始删除代码至行尾。

Ctrl+Shift+K 删除整行。

Ctrl+/ 注释单行。

Ctrl+Shift+/ 注释多行。

Ctrl+K+U 转换大写。

Ctrl+K+L 转换小写。

Ctrl+Z 撤销。

Ctrl+Y 恢复撤销。

Ctrl+U 软撤销，感觉和 Gtrl+Z 一样。

Ctrl+F2 设置书签

Ctrl+T 左右字母互换。

F6 单词检测拼写

#### 搜索类

Ctrl+F 打开底部搜索框，查找关键字。

Ctrl+shift+F 在文件夹内查找，与普通编辑器不同的地方是sublime允许添加多个文件夹进行查找，略高端，未研究。

Ctrl+P 打开搜索框。举个栗子：1、输入当前项目中的文件名，快速搜索文件，2、输入@和关键字，查找文件中函数名，3、输入：和数字，跳转到文件中该行代码，4、输入#和关键字，查找变量名。

Ctrl+G 打开搜索框，自动带：，输入数字跳转到该行代码。举个栗子：在页面代码比较长的文件中快速定位。

Ctrl+R 打开搜索框，自动带@，输入关键字，查找文件中的函数名。举个栗子：在函数较多的页面快速查找某个函数。

Ctrl+： 打开搜索框，自动带#，输入关键字，查找文件中的变量名、属性名等。

Ctrl+Shift+P 打开命令框。场景栗子：打开命名框，输入关键字，调用sublime text或插件的功能，例如使用package安装插件。

Esc 退出光标多行选择，退出搜索框，命令框等。

#### 显示类

Ctrl+Tab 按文件浏览过的顺序，切换当前窗口的标签页。

Ctrl+PageDown 向左切换当前窗口的标签页。

Ctrl+PageUp 向右切换当前窗口的标签页。

Alt+Shift+1 窗口分屏，恢复默认1屏（非小键盘的数字）

Alt+Shift+2 左右分屏-2列

Alt+Shift+3 左右分屏-3列

Alt+Shift+4 左右分屏-4列

Alt+Shift+5 等分4屏

Alt+Shift+8 垂直分屏-2屏

Alt+Shift+9 垂直分屏-3屏

Ctrl+K+B 开启/关闭侧边栏。

F11 全屏模式

Shift+F11 免打扰模式