cmake_minimum_required(VERSION 3.22)
project(steganografia_projekt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(steganografia_projekt main.cpp steganografia_projekt/mainwindow.cpp steganografia_projekt/mainwindow.h steganografia_projekt/mainwindow.ui)
target_link_libraries(steganografia_projekt
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

