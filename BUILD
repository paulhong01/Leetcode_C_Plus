cc_library(
    name = "solution1",
    hdrs = ["solution1.h"],
    srcs = ["solution1.cc"],
)

cc_test(
  name = "solution1_test",
  size = "small",
  deps = ["@com_google_googletest//:gtest_main", ":solution1"],
)

cc_library(
    name = "solution87",
    hdrs = ["solution87.h"],
    srcs = ["solution87.cc"],
)

cc_test(
  name = "solution87_test",
  size = "small",
  srcs=["solution87_test.cc"],
  deps = [
    "@com_google_googletest//:gtest_main",
    ":solution87"
  ],
)