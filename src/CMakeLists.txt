add_library(stack stack/FixedSizeArrayStack.h)

target_sources(stack
  PRIVATE
    stack/LinkedListStack.cpp
    stack/Node.cpp
  PUBLIC
    stack/LinkedListStack.h
    stack/Node.h
    stack/IStack.h
  )

target_include_directories(stack
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

# we use this to get code coverage
# flags are only valid with the GNU compiler and on Linux
if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
  target_compile_options(stack
    PUBLIC
      "--coverage"
    )
  target_link_options(stack
    INTERFACE
      "--coverage"
    )
endif()
