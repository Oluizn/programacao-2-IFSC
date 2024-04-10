# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-src"
  "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-build"
  "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix"
  "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/tmp"
  "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp"
  "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src"
  "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Anton/OneDrive/Documentos/programacao-2-IFSC/NewProjectCMake/cmake-build-debug/_deps/libprg-subbuild/libprg-populate-prefix/src/libprg-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
