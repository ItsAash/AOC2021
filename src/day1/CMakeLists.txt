
add_library(day1 "")

target_sources(day1
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/day1.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/day1.h    
)

target_include_directories(day1
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/../utils
  )