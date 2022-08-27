
add_library(day3 "")

target_sources(day3
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/day3.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/day3.h 
)

target_include_directories(day3
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/../utils
  )