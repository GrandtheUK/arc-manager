add_library(yaml-arc STATIC
    include/parser.h
    src/parser.cpp
)

find_package(yaml-cpp REQUIRED)

include_directories(
 include
 ${YAML_CPP_INCLUDE_DIRS}
)

create_target_directory_groups(yaml-arc)

target_link_libraries(yaml-arc ${YAML_CPP_LIBRARIES})


