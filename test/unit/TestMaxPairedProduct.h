// Test Header for MaxPairedProduct Classes
// Created by Jonathan Pham //

#ifndef TEST_CPP_PROJECT_MAXPAIREDPRODUCT_H
#define TEST_CPP_PROJECT_MAXPAIREDPRODUCT_H

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "mpp_library/MppModule.h"
#include "unit/mocks/mockInputBehavior.h"

class TestMaxPairedProductBase : public ::testing::Test {
protected:
  // Test Dummies

  // UUT Definitions

  virtual void SetUp(){};
  virtual void TearDown(){};
};

class TestMaxPairedProduct : public TestMaxPairedProductBase {
protected:
  // Test Dummies

  // UUT Definitions
  MppModule uut_mpp;

  virtual void SetUp();
  virtual void TearDown();
};

class TestMppModule : public ::testing::Test {
protected:
  // Test Dummies

  // UUT Definitions

  virtual void SetUp(){};
  virtual void TearDown(){};
};

#endif //TEST_CPP_PROJECT_MAXPAIREDPRODUCT_H
