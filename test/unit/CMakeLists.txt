
file( GLOB UNIT_TEST_SRCS *_test.cpp )

gtest_begin(libg3logger)
  fips_files(
    ${UNIT_TEST_SRCS}
  )

  fips_deps(g3logger)

gtest_end()
