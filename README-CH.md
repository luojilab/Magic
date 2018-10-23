![](./src/Resource_Files/icon/app_icon_128.png)

# ETypesetting: EPUB编辑器

[![LICENSE](https://img.shields.io/packagist/l/doctrine/orm.svg)](./LICENSE.md)![version](https://img.shields.io/badge/version-0.9.27-green.svg)

[English Document](./README.md)

[TOC]

## 概述

ETypesetting是基于[Sigil](https://github.com/Sigil-Ebook/Sigil)的可以编辑Epub2和Epub3的电子书

## 特性

* 支持Epub2和Epub3
* 使用得到自研的电子书引擎可以模拟电子书在iPhone和小米手机渲染的效果
* 夜间模式和其他背景色
* 数学公式
* 实时预览
* HTML语法检查

## 获取二进制文件

[Get the binary](https://github.com/luojilab/ETypeSetting/releases)

## 编译项目

### 在macOS上编译工程

* 在目标机器上安装Python3
* 编译带有webkit build版本的Qt5.5。或直接从[这里]()获取
* 下载CMake3.11+
* 下载引擎库到本地，并且链接。引擎库在[这里]()获取
* 将Qt的路径设置到CMAKE_PREFIX_PATH
* 生成Xcode工程文件
* 编译安装

对于release版本，在发版的时候，将Python.frameworks放到应用中的lib或者Frameworks文件夹中，并且重新设置动态链接库的名称到**@rpath/Python.framework/Versions/${versionNumber}/Python**

生成的安装包放在**${BuildRootPath}/Build/bin/Release**路径下

### 在Windows上编译工程

- 在目标机器上安装Python3
- 编译带有webkit build版本的Qt5.5。或直接从[这里]()获取
- 下载CMake3.11+
- 下载引擎库到本地，并且链接。引擎库在[这里]()获取
- 将Qt的路径设置到CMAKE_PREFIX_PATH
- 生成Xcode工程文件
- 编译安装

通过运行makeinstaller工程来生成Windows应用安装器

## 代码贡献

当您想要给我们的工程作出贡献的时候，请先通过提issue的方式来与我们一起讨论修改的内容。

我们git log采用的格式的模版在[这里](https://github.com/angular/angular/blob/master/CONTRIBUTING.md#commit)

## 版权

本工程是基于MIT License - 详见[LICENSE.md](./LICENSE.md)

## 致谢

* 感谢Sigil开发人员。我们在Sigil的基础上进行了二次开发

* 感谢得到精排组的成员给简排提出了很重要的建议以及图标支持
* 感谢对本工程作出共享的开发人员

## 依赖文件

- Sigil

- Hunspell - [http://hunspell.sourceforge.net](http://hunspell.sourceforge.net/)
- MiniZip version 1.1
- Perl-compatible Regular Expression Library (pcre)
- ZLib Data Compression Library (zlib 1.2.8)
- jQuery-2.2.4 (src/Resource_Files/javascript/jquery-2.2.4.min.js)
- jQuery.ScrollTo-2.1.2 (src/Resource_Files/javascript/jquery.scrollTo-2.1.2.min.js)
- MathJax.js single file version: (src/Resource_Files/polyfills)

- Beautiful Soup 4 (src/Resource_Files/plugin_launchers/sigil_bs4)
- Google's Gumbo Parser (internal/gumbo)