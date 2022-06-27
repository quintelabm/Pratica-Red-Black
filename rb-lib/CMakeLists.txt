
file(GLOB source_files src/*.cpp include/*.hpp)
add_library(rb-lib ${source_files})
target_include_directories(rb-lib PUBLIC ${PROJECT_SOURCE_DIR}/include)
