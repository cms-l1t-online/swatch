# swatch


## Contributing
https://www.jlab.org/Hall-D/offline/CodingAndStyleRules.pdf

Which is mostly compatible with http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml
The Google C++ Style Guide allows more freedom for function names. More examples below

### General
 - Function names, variable names, and filenames should be descriptive; eschew abbreviation.
 - Do not use double underscores ("__") 

### Files
 - C++ header files use the suffix ```.h```, e.g. CaloCluster.h
 - C++ source files use the suffix ```.cc```, e.g. CaloCluster.cc
 - Name header files after the class
 - Name source files after the cluss
 
### Class, struct, type and enumeration names

### Variable names
Variable names are all lowercase, with underscores between words. 
Class member variables have trailing underscores. 
For instance: ```my_exciting_local_variable, my_exciting_member_variable_```.

### Function names
 Regular functions have mixed case; accessors and mutators match the name of the variable: 
 ```myExcitingFunction(), myExcitingMethod(), my_exciting_member_variable(), set_my_exciting_member_variable().``` 

Helpful stuff
==============
http://www.vtk.org/Wiki/Eclipse_CDT4_Generator
In order to create Eclipse project files from the build file execute:
```cmake -G"Eclipse CDT4 - Unix Makefiles"```
