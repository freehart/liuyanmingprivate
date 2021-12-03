## git 别名配置
git config --global alias.co checkout
git config --global alias.br branch
git config --global alias.ci commit
git config --global alias.st status
git config --global alias.pl  pull --rebase
git config --global alias.lg "log --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %C(bold blue)%s%Creset %Cgreen(%cr) <%an>%Creset' --abbrev-commit --date=relative"
## git ssh配置
在管理Git项目上，很多时候都是直接使用https url克隆到本地，当然也有有些人使用SSH url克隆到本地。

这两种方式的主要区别在于：使用https url克隆对初学者来说会比较方便，复制https url然后到git Bash里面直接用clone命令克隆到本地就好了，但是每次fetch和push代码都需要输入账号和密码，这也是https方式的麻烦之处。

而使用SSH url克隆却需要在克隆之前先配置和添加好SSH key，因此，如果你想要使用SSH url克隆的话，你必须是这个项目的拥有者。否则你是无法添加SSH key的，另外ssh默认是每次fetch和push代码都不需要输入账号和密码，如果你想要每次都输入账号密码才能进行fetch和push也可以另外进行设置。前面的几篇介绍Git的博客里面采用的都是https的方式作为案例，

今天主要是讲述如何配置使用ssh方式来提交和克隆代码。

大概可以分为一下几个步骤

    设置Git的user name和email：(如果是第一次的话)
    检查是否已经有SSH Key。
    生成密钥
    添加密钥到ssh-agent
    登陆Github, 添加 ssh
    测试：

1、设置Git的user name和email：(如果是第一次的话)

# 这里的“xujun" 可以替换成自己的用户名
git config --global user.name "LiuYanming"
# 这里的邮箱 gdutxiaoxu@163.com  替换成自己的邮箱
git config --global user.email  "lymvsmm@163.com"

检查是否已经有SSH Key。

　　cd ~/.ssh    

接着输入ls，

ls

列出该文件下的文件，看是否存在 id_isa 和 id_isa.pub 文件（也可以是别的文件名，只要 yourName 和 yourName.pub 承兑存在），如果存在的话，证明已经存在 ssh key了，可以直接跳过 生成密钥 这一步骤，

下图是存在的情况下

3、生成密钥

# 这里的邮箱 gdutxiaoxu@163.com  替换成自己的邮箱
ssh-keygen -t rsa -C "gdutxiaoxu@163.com"

连续3个回车。如果不需要密码的话。
最后得到了两个文件：id_rsa和id_rsa.pub。

默认的存储路径是：

C:\Users\Administrator\.ssh

4、添加密钥到ssh-agent

确保 ssh-agent 是可用的。ssh-agent是一种控制用来保存公钥身份验证所使用的私钥的程序，其实ssh-agent就是一个密钥管理器，运行ssh-agent以后，使用ssh-add将私钥交给ssh-agent保管，其他程序需要身份验证的时候可以将验证申请交给ssh-agent来完成整个认证过程。

# start the ssh-agent in the background
eval "$(ssh-agent -s)"

添加生成的 SSH key 到 ssh-agent。

ssh-add ~/.ssh/id_rsa


5、登陆Github, 添加 ssh 。

把id_rsa.pub文件里的内容复制到这里

6、测试：

ssh -T git@github.com


你将会看到：

    Hi humingx! You’ve successfully authenticated, but GitHub does not provide shell access.

如果看到Hi后面是你的用户名，就说明成功了。

扩展

如果我之前的仓库是用https提交的，那么我现在想用ssh 的方式提交，怎么办呢 ，别急，下面就来教你怎样操作了。

这里同样以我本机目录下的G://test 仓库为例子，

找到仓库下 .git 文件夹下的config文件，打开，可以看到以下内容

 [core]
    repositoryformatversion = 0
    filemode = false
    bare = false
    logallrefupdates = true
    symlinks = false
    ignorecase = true
[remote "origin"]
    url = https://github.com/gdutxiaoxu/test.git
    fetch = +refs/heads/*:refs/remotes/origin/*
[branch "master"]
    remote = origin
    merge = refs/heads/master


将文件中的 url = https://github.com/gdutxiaoxu/test.git 更改为 url = git@github.com:gdutxiaoxu/test.git 即可。

修改后的文件如下

[core]
    repositoryformatversion = 0
    filemode = false
    bare = false
    logallrefupdates = true
    symlinks = false
    ignorecase = true
[remote "origin"]
    url = git@github.com:gdutxiaoxu/test.git
    fetch = +refs/heads/*:refs/remotes/origin/*
[branch "master"]
    remote = origin
    merge = refs/heads/master

进入本地仓库 ，增加 xujun.txt 文件，提交，你会看到不需要再提交密码了

