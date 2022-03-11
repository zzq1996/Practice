cmake_minimum_required(VERSION 3.21)
project(Practice)

set(CMAKE_CXX_STANDARD 14)

add_executable(Practice main.cpp list/List.cpp list/List.h queue/CirQueue.cpp queue/CirQueue.h string/Kmp.cpp string/Kmp.h tree/BinaryTree.cpp tree/BinaryTree.h tree/ThreadTree.cpp tree/ThreadTree.h)
