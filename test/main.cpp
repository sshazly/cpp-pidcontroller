/** @file main.cpp
 *  @brief Runs all tests in /test/test.cpp.
 *
 *  @author Sherif Shazly (sshazly)
 *  @copyright University of Maryland (ENPM808X)
 *  @bug No known bugs.
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
