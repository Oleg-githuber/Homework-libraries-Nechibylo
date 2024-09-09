# CMakeList.txt: проект CMake для Task3; включите исходный код и определения,
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

project ("Task3")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(leaving SHARED "leaving/leaver.h" "leaving/leaver.cpp")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task3 "Task3.cpp" "Task3.h")

target_link_libraries(Task3 leaving)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Task3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
