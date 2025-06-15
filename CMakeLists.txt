cmake_minimum_required(VERSION 3.10.0)
project(Calculator VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets) 

set(SRC
    main.cpp
    calculator.cpp
    calculator.h
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

add_executable(Calculator 
                main.cpp
                ${SRC})

target_link_libraries(Calculator PRIVATE Qt6::Widgets Qt6::Core Qt6::Gui)

include(GNUInstallDirs)


include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
