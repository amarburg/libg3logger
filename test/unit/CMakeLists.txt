
file( GLOB UNIT_TEST_SRCS *_test.cpp )

gtest_begin(liblogger)
  fips_files(
    ${UNIT_TEST_SRCS}
  )

  fips_deps(logger)

gtest_end()
