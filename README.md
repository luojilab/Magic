## Sigil: An Ebook Editor

[中文文档](./README-CH.md)

[TOC]

### Overview

Sigil based on [Sigil](https://github.com/Sigil-Ebook/Sigil) is an Epub ebook Editor that can manipulate epub2 and epub3

------

### Feature

* Support for epub2 and epub3
* A simulator that can simulate rendering on different mobile phone including iPhone and Xiaomi etc. using DeDao self-designed ebook engine.
* Night mode or other background color using in ebook
* Math formula edit
* Rendering just in time when editing HTML file
* HTML syntax check

------

### Build

#### Build on macOS

* Install Python3 on your machine
* Install Qt5.5 with webkit build, or you can get it from [here]() directly
* Download [CMake](https://cmake.org/)
* Set Qt path to CMAKE_PREFIX_PATH in CMake
* Create an Xcode project
* Build and run

When you want to build a **release version**, put Python framework in your application's **lib or Frameworks** directory and reset shared libraries linked to **@rpath/Python.framework/Versions/${versionNumber}/Python**

Mac installer dmg is put on **${BuildRootPath}/Build/bin/Release**

#### Build on Windows

------

- Install Python3 on your machine
- Install Qt5.5 with webkit build, or you can get it from [here]() directly
- Download [CMake](https://cmake.org/)
- Set Qt path to CMAKE_PREFIX_PATH in CMake
- Create an VS project
- Build and run

Run **makeinstaller** solution to make a windows wizard

------

#### Get the Binary

[macOS]()

[Windows]()

------

### Dependencies

* Sigil

- Hunspell - [http://hunspell.sourceforge.net](http://hunspell.sourceforge.net/)
- MiniZip version 1.1
- Perl-compatible Regular Expression Library (pcre)
- ZLib Data Compression Library (zlib 1.2.8)
- jQuery-2.2.4 (src/Resource_Files/javascript/jquery-2.2.4.min.js)
- jQuery.ScrollTo-2.1.2 (src/Resource_Files/javascript/jquery.scrollTo-2.1.2.min.js)
- MathJax.js single file version: (src/Resource_Files/polyfills)

In addtion, Sigil uses the following other packages that have been specifically modified for use inside Sigil:

- Beautiful Soup 4 (src/Resource_Files/plugin_launchers/sigil_bs4)
- Google's Gumbo Parser (internal/gumbo)

