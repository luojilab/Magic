<img src="./src/Resource_Files/icon/app_icon_512.png" width=128/>

# ETypesetting: An Ebook Editor

[![LICENSE](https://img.shields.io/packagist/l/doctrine/orm.svg)](./LICENSE.md) ![version](https://img.shields.io/badge/version-0.9.27-green.svg)
[中文文档](./README-CH.md)

[TOC]

## Overview

ETypesetting based on [Sigil](https://github.com/Sigil-Ebook/Sigil) is an Epub ebook Editor that can manipulate epub2 and epub3

## Feature

* Support for epub2 and epub3
* A simulator that can simulate rendering on different mobile phone including iPhone and Xiaomi etc. using DeDao self-designed ebook engine.
* Night mode or other background color using in ebook
* Math formula edit
* Rendering just in time when editing HTML file
* HTML syntax check

## Get the Binary

[Get the binary](https://github.com/luojilab/ETypeSetting/releases)

## Build

### Build on macOS

* Install Python3 on your machine
* Install Qt5.5 with webkit build, or you can get it from [here]() directly
* Download [CMake](https://cmake.org/)
* Download engine library from [here]() and link them
* Set Qt path to CMAKE_PREFIX_PATH in CMake
* Create an Xcode project
* Build and run

When you want to build a **release version**, put Python framework in your application's **lib or Frameworks** directory and reset shared libraries linked to **@rpath/Python.framework/Versions/${versionNumber}/Python**

Mac installer dmg is put on **${BuildRootPath}/Build/bin/Release**

### Build on Windows

- Install Python3 on your machine
- Install Qt5.5 with webkit build, or you can get it from [here]() directly
- Download [CMake](https://cmake.org/)
- Download engine library from [here]() and link them
- Set Qt path to CMAKE_PREFIX_PATH in CMake
- Create an VS project
- Build and run

Run **makeinstaller** solution to make a windows wizard

## Contributing

When contributing to this project, you need to discuss the change you want to make with us first by issue.

The git log message formate we use is [here](https://github.com/angular/angular/blob/master/CONTRIBUTING.md#commit)

## License

This project is licensed under the MIT License - see the [LICENSE.md](./LICENSE.md) file for details

## Acknowledgments

* Sigil developers
* Dedao Ebook typography staff
* Developers for those contributed to this project

## Dependencies

* Sigil

- Hunspell - [http://hunspell.sourceforge.net](http://hunspell.sourceforge.net/)
- MiniZip version 1.1
- Perl-compatible Regular Expression Library (pcre)
- ZLib Data Compression Library (zlib 1.2.8)
- jQuery-2.2.4 (src/Resource_Files/javascript/jquery-2.2.4.min.js)
- jQuery.ScrollTo-2.1.2 (src/Resource_Files/javascript/jquery.scrollTo-2.1.2.min.js)
- MathJax.js single file version: (src/Resource_Files/polyfills)

In addtion, ETypesetting uses the following other packages that have been specifically modified for use inside ETypesetting:

- Beautiful Soup 4 (src/Resource_Files/plugin_launchers/sigil_bs4)
- Google's Gumbo Parser (internal/gumbo)

