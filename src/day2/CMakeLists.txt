
add_library(day2 "")

target_sources(day2
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/day2.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/day2.h 
)

target_include_directories(day2
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/../utils
  )