# TDD_boiler_plate
This is a boiler plate repo for the developing using TDD

## Prequists 
1. git
2. cmake
3. gcc

## Cloning
 use `--recurse-submodules` when cloning as I've added the Unity library as a submodule.

## Usage 
* `prod_code` folder will contain the module developed. 
* Don't forget to change this line in CMakeLists.txt to the correct C files
```bash
# TODO : To be changed to the .c file that you've renamed
add_library(prod_code STATIC ${PROD_PATH}/example.c)
```
* Run these commands once after the previous step (you should be in the build folder)
```bash
$ cd build
$ cmake ..
-- Configuring done
-- Generating done
-- Build files have been written to: /cygdrive/c/Users/inegm/git/TDD_boiler_plate/build
$ cmake --build . && ./test_main.exe
[ 33%] Built target prod_code
[ 66%] Built target unity
[100%] Built target test_main
/cygdrive/c/Users/inegm/git/TDD_boiler_plate/src/test_main.c:36:test_null__should_hi_only:PASS
/cygdrive/c/Users/inegm/git/TDD_boiler_plate/src/test_main.c:37:test_islam__should_hi_islam:PASS

-----------------------
2 Tests 0 Failures 0 Ignored
OK
```
* To clean the folder please use
```bash
$ cmake --build . --target clean
```
