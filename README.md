![icon](include/img++.png)
<!-- # IMG ++ -->
![GitHub repo size](https://img.shields.io/github/repo-size/holychicken99/CPP_imageBoost?style=plastic)



C++ GUI application to edit images
```bash
  git clone https://github.com/holychicken99/CPP_imageBoost
```

Go to the project directory

```bash
  cd boost_fileviewer
```

Install dependencies


  [Premake5](https://premake.github.io/):  used to build Makefile  
  [Boost libraries](https://www.boost.org/doc/libs/): for image IO \
  [Make](https://www.gnu.org/software/make/) : build system


Create  Makefile

```bash
  premake5 gmake2
```
Run Makefile for debug/release config
```bash
  make config=debug/release
```
Executables
```bash
  cd bin/config; ./output
  cd bin/release; ./output
```


  
