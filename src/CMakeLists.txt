
find_package(Qt4 REQUIRED)

file(GLOB SHTIMER_SRC *.cpp *.h)

add_executable(shtimer ${SHTIMER_SRC})

