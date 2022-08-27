
add_library(utils "")

target_sources(utils
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/utils.cpp
    ${CMAKE_CURRENT_LIST_DIR}/splitString.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/utils.h    
    ${CMAKE_CURRENT_LIST_DIR}/splitString.h 
)

target_include_directories(utils
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )