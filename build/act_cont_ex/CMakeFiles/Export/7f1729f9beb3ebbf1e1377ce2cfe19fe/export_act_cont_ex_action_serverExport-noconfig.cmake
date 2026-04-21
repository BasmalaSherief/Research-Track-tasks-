#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "act_cont_ex::action_server" for configuration ""
set_property(TARGET act_cont_ex::action_server APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(act_cont_ex::action_server PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libaction_server.so"
  IMPORTED_SONAME_NOCONFIG "libaction_server.so"
  )

list(APPEND _cmake_import_check_targets act_cont_ex::action_server )
list(APPEND _cmake_import_check_files_for_act_cont_ex::action_server "${_IMPORT_PREFIX}/lib/libaction_server.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
