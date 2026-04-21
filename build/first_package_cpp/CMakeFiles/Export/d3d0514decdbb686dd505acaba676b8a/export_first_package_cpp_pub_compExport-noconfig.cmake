#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "first_package_cpp::pub_comp" for configuration ""
set_property(TARGET first_package_cpp::pub_comp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(first_package_cpp::pub_comp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpub_comp.so"
  IMPORTED_SONAME_NOCONFIG "libpub_comp.so"
  )

list(APPEND _cmake_import_check_targets first_package_cpp::pub_comp )
list(APPEND _cmake_import_check_files_for_first_package_cpp::pub_comp "${_IMPORT_PREFIX}/lib/libpub_comp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
