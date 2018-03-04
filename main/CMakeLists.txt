set(Main_SRCS
    main.cpp
)

add_executable(projectName
    ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(projectName
    libsrc
)

install(TARGETS projectName DESTINATION bin)
