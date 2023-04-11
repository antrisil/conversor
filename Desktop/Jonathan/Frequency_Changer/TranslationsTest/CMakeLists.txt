cmake_minimum_required(VERSION 3.16)

project(TranslationsTest VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH "/home/goncalo/Qt/6.4.1/gcc_64/lib/cmake")
find_package(Qt6 6.2 COMPONENTS Quick LinguistTools REQUIRED)

qt_add_executable(appTranslationsTest
    main.cpp
    mytranslator.cpp
    mytranslator.h
)

qt_add_qml_module(appTranslationsTest
    URI TranslationsTest
    VERSION 1.0
    QML_FILES main.qml 
)

qt6_add_translations(appTranslationsTest
    TS_FILES TranslationsTest_pt_PT.ts
    QM_FILES_OUTPUT_VARIABLE qm_files
)
install(FILES ${qm_files} DESTINATION .)

set_target_properties(appTranslationsTest PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appTranslationsTest
    PRIVATE Qt6::Quick)

install(TARGETS appTranslationsTest
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
