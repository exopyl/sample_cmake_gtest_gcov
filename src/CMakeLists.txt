cmake_minimum_required(VERSION 3.18.4)

project(libfoobar)

set(sources
    foo.cxx
    bar.cxx
    )
    
set(headers
    foo.h
    bar.h
    )

add_library(foobar SHARED ${headers} ${sources})

install(TARGETS foobar DESTINATION .)
