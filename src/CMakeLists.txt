add_subdirectory(day1)
add_subdirectory(utils)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/utils
    ${CMAKE_CURRENT_LIST_DIR}/day1
)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
    day1
    utils
)