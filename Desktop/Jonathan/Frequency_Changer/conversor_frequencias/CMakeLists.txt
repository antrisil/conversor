cmake_minimum_required(VERSION 3.16)

project(conversor_frequencias VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



add_custom_target(translations DEPENDS ${QM_FILES})

include_directories(${Qt6X11Extras_INCLUDE_DIRS})

find_package(Qt6 REQUIRED COMPONENTS Concurrent)
find_package(Qt6 REQUIRED COMPONENTS Charts Core Gui Qml Quick Sql)
find_package(Qt6 6.2 COMPONENTS Quick SerialBus REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Sql)
find_library(SOCKETCAN_LIB socketcan)
find_package(Qt6LinguistTools REQUIRED)
set(LANGUAGES pt)
set(TS_FILES PT_pt.ts)
set(QM_FILES PT_pt.qm)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/translations DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
qt6_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
qt6_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${SOURCES} ${HEADERS} OPTIONS -locations none)

qt_add_executable(appconversor_frequencias
    main.cpp
    dbmanager.h
    dbmanager.cpp
    includes.h
    pcan.h
    pcan.cpp
    timer.cpp
    timer.h
    useractivitydetector.h
    useractivitydetector.cpp
    mytranslator.h
    mytranslator.cpp
)

qt_add_qml_module(appconversor_frequencias
    URI conversor_frequencias
    VERSION 1.0
    QML_FILES main.qml
    QML_FILES booting.qml
    QML_FILES languages.qml
    QML_FILES metric.qml
    QML_FILES MONITOR.qml
    QML_FILES output.qml
    QML_FILES settings.qml
    QML_FILES standby.qml
    QML_FILES temperature.qml
    QML_FILES grafic.qml
    QML_FILES bypass.qml
)

set_target_properties(appconversor_frequencias PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appconversor_frequencias PUBLIC
    Qt::Charts
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
    Qt::Sql
    Qt::Concurrent
    Qt6::SerialBus
    socketcan
)

install(TARGETS appconversor_frequencias
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
