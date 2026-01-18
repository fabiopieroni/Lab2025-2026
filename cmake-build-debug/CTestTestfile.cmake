# CMake generated Testfile for 
# Source directory: C:/Users/fabio/CLionProjects/ProgettoLaboratorioProg
# Build directory: C:/Users/fabio/CLionProjects/ProgettoLaboratorioProg/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[AllTests]=] "C:/Users/fabio/CLionProjects/ProgettoLaboratorioProg/cmake-build-debug/bin/unit_tests.exe")
set_tests_properties([=[AllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/fabio/CLionProjects/ProgettoLaboratorioProg/CMakeLists.txt;48;add_test;C:/Users/fabio/CLionProjects/ProgettoLaboratorioProg/CMakeLists.txt;0;")
subdirs("_deps/sfml-build")
subdirs("_deps/googletest-build")
