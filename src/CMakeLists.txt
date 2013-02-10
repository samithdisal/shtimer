
find_package(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})

file(GLOB SHTIMER_SRC *.cpp)
file(GLOB SHTIMER_HEADERS *.h)

qt4_wrap_cpp(SHTIMER_HMOC ${SHTIMER_HEADERS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

add_executable(shtimer ${SHTIMER_SRC} ${SHTIMER_HMOC})
target_link_libraries(shtimer ${QT_LIBRARIES})