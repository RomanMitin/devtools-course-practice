// Copyright 2023 Mitin Roman
#pragma once

class application_t {
 public:
    application_t() = default;

    int run(int argc, const char* const * argv);

    ~application_t() = default;
};
