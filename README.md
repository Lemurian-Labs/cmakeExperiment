Experimental repos to try out a cleaned up build infrastructure  
Basic Ideas:
- Most global settings in top level CMakeLists.txt
- "top" binary is compiler.so
- each subsystem builds its own static libary (archive)

In this model scandinavia is the top level so file for the C++ part of the compiler. sweden and denmark are sub systems (nemo, proteus etc). Iceland will be python (Iron). Common is both Common and Pythia in our model)

The different branches tries to model a specific property of the build
- cplusplusbaseline - what it sounds like, fairly clean solution for building the basic so file, currently the same as main
- compilerCompiletime - for things that generates source files, only a first draft so far
- pybind support - my first attempt to add python, i.e. Iron, still a work in progress

(branches) still to be created:
- variant builds (debug, product build etc)
- support for mutiple archiectures

Notes:
There are two ways to express dependencies between subsystems
- target_link_libraries; more compact, handles trenasitive dependencies and disallows cyclic (i.e. reverse)  dependencies, but enforce build order where there isn't any (i.e. serialize on dependencies)
- target_include_directories; needs explicit listing of all (dependent) include directories, but allows reverse dependencies
We have reverse dependencies in our designs (?); nautilus calls proteus, but proteus needs to use Nautilus objects, so they need each others headers but don't need to link to each other until we build the final so

Still to do
- Architecture support
- CCACHE
- sci-kit-core warning
- Control sanitization flags
- Control compiler compiletime dependencies
- Move yaml (?) needed by both pythia and config?
- Bootstrap on generated files (how to reference generated files before they are created
- Ctest support (and GoogleTest?)
- FetcContent?
- disable build tests for product builds
