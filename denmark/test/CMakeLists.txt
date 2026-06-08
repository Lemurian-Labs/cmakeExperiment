# Dispatch to the group subdirectory; no-op if this group has no tests yet
if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${LANGUAGE_GROUP})
    add_subdirectory(${LANGUAGE_GROUP})
endif()
