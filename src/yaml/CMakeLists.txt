add_library(yaml STATIC
    include/parser.h
    src/parser.cpp
)

find_package(yaml-cpp REQUIRED)

include_directories(
 include
 ${YAML_CPP_INCLUDE_DIRS}
)

create_target_directory_groups(yaml)

target_link_libraries(yaml ${YAML_CPP_LIBRARIES})


