// Copyright 2023 Mitin Roman

#include <gtest/gtest.h>

#include "include/euler_function_app.hpp"

TEST(Euler_function_app, test_default_construct) {
    // Act and Assert
    EXPECT_NO_THROW(application_t app());
}

TEST(Euler_function_app, test_run_function) {
    // Arange
    application_t app{};

    // Act and Assert
    EXPECT_EQ(app.run(1, NULL), 0);
}