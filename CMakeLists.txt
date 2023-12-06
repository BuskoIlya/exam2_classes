cmake_minimum_required(VERSION 3.2)

project(class_examples)

set(HEADERS 
	gomove.hpp
	text.hpp
)
set(SOURCES
	main.cpp
	gomove.cpp
	text.cpp
)

add_executable(test_constructors ${SOURCES} ${HEADERS})
