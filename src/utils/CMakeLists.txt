
add_library(utils "")

target_sources(utils
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/utils.cpp
    ${CMAKE_CURRENT_LIST_DIR}/splitString.cpp
    ${CMAKE_CURRENT_LIST_DIR}/convertDecimal.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/utils.h    
    ${CMAKE_CURRENT_LIST_DIR}/splitString.h 
    ${CMAKE_CURRENT_LIST_DIR}/convertDecimal.h 
)

target_include_directories(utils
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )