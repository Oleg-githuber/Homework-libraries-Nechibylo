# CMakeList.txt: проект CMake для Task4; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

set(CMAKE_C_COMPILER "C:\Users\Oleg\gcc\bin\gcc.exe")
set(CMAKE_CXX_COMPILER "C:\Users\Oleg\gcc\bin\g++.exe")

cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Task4")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(figures SHARED "figures/Figure.h" "figures/triangles/Triangle.h" "figures/triangles/Triangle.cpp"  "figures/Figure.cpp" "figures/triangles/RectangularTriangle.h" 
"figures/triangles/RectangularTriangle.cpp" "figures/triangles/IsoscelesTriangle.h" "figures/triangles/IsoscelesTriangle.cpp" "figures/triangles/PerfectTriangle.h" 
"figures/triangles/PerfectTriangle.cpp" "figures/quadrangles/Quadrangle.h" "figures/quadrangles/Quadrangle.cpp" "figures/quadrangles/Rectangle.h" 
"figures/quadrangles/Rectangle.cpp" "figures/quadrangles/Quadrate.h" "figures/quadrangles/Quadrate.cpp" "figures/quadrangles/Parallelogram.h" 
"figures/quadrangles/Parallelogram.cpp" "figures/quadrangles/Rhombus.h" "figures/quadrangles/Rhombus.cpp" "figures/functions/printInfo.h" "figures/functions/printInfo.cpp" 
"figures/figures.h")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task4 "Task4.h" "Task4.cpp")

target_link_libraries(Task4 figures)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Task4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
