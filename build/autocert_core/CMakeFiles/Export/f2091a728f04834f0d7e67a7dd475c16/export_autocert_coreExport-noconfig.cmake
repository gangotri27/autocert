#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "autocert_core::autocert_core" for configuration ""
set_property(TARGET autocert_core::autocert_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(autocert_core::autocert_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libautocert_core.so"
  IMPORTED_SONAME_NOCONFIG "libautocert_core.so"
  )

list(APPEND _cmake_import_check_targets autocert_core::autocert_core )
list(APPEND _cmake_import_check_files_for_autocert_core::autocert_core "${_IMPORT_PREFIX}/lib/libautocert_core.so" )

# Import target "autocert_core::batch_fk_server" for configuration ""
set_property(TARGET autocert_core::batch_fk_server APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(autocert_core::batch_fk_server PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/autocert_core/batch_fk_server"
  )

list(APPEND _cmake_import_check_targets autocert_core::batch_fk_server )
list(APPEND _cmake_import_check_files_for_autocert_core::batch_fk_server "${_IMPORT_PREFIX}/lib/autocert_core/batch_fk_server" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
