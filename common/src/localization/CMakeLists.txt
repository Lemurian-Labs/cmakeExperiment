if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${LANGUAGE_GROUP})
    add_subdirectory(${LANGUAGE_GROUP})
    message(STATUS "common: ${LANGUAGE_GROUP} localization")
else()
    add_subdirectory(_empty_stub)
    message(STATUS "common: no ${LANGUAGE_GROUP} localization — using _empty_stub (asserts at runtime if called)")
endif()

# PRIVATE: lang_lookup.hpp is only needed to build common itself, not by consumers
target_include_directories(common PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
