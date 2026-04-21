# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_act_cont_ex_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED act_cont_ex_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(act_cont_ex_FOUND FALSE)
  elseif(NOT act_cont_ex_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(act_cont_ex_FOUND FALSE)
  endif()
  return()
endif()
set(_act_cont_ex_CONFIG_INCLUDED TRUE)

# output package information
if(NOT act_cont_ex_FIND_QUIETLY)
  message(STATUS "Found act_cont_ex: 0.0.0 (${act_cont_ex_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'act_cont_ex' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT act_cont_ex_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(act_cont_ex_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${act_cont_ex_DIR}/${_extra}")
endforeach()
