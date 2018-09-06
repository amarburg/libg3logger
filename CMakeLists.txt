cmake_minimum_required(VERSION 3.5)
if( NOT FIPS_IMPORT )
	get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
	include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

	fips_setup(PROJECT libg3logger)
endif()

fips_include_directories( include/ )

fips_add_subdirectory("lib/")

if( NOT FIPS_IMPORT )
	#fips_add_subdirectory("tools/")

	if( FIPS_UNITTESTS )
	  fips_add_subdirectory( test/unit/ )
	endif()

	fips_finish()
endif()
