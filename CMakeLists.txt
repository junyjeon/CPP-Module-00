cmake_minimum_required(VERSION 3.25)
project(Cpp00)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
include_directories(ex01)
include_directories(ex02)

add_executable(Cpp00
        ex00/MegaPhone.cpp
        ex00/MegaPhone.h
        ex01/Contact.cpp
        ex01/Contact.hpp
        ex01/PhoneBook.cpp
        ex01/PhoneBook.hpp
        ex02/Account.hpp
        ex02/tests.cpp)
