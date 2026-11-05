## 祝谢晟杰天天开心！

## git restore是撤销文件的修改，把文件回退到仓库中的版本，git restore --staged就是本地的修改依旧在，只是单纯撤销add

## git log --pretty=oneline

## Git管理的是修改，当你用`git add`命令后，在工作区的第一次修改被放入暂存区，准备提交，但是，在工作区的第二次修改并没有放入暂存区，所以，`git commit`只负责把暂存区的修改提交了，也就是第一次的修改被提交了，第二次的修改不会被提交。



## git checkout和git restore，都可以撤销工作区的文件修改。

`checkout` 是个万能大杂烩命令，一身多职：

1. `git checkout 分支名`：切换分支
2. `git checkout -- 文件`：撤销工作区文件修改

两个完全不相干的功能挤在同一个命令里，新手很容易搞懵。

`restore` 是单独拆分出来，职责单一：

1. `git restore 文件`：只撤销工作区改动
2. `git restore --staged 文件`：只撤销 add（移出暂存区，保留改动）
