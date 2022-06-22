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

cc_library(
    name = "solution91",
    hdrs = ["solution91.h"],
    srcs = ["solution91.cc"],
)

cc_library(
    name = "solution92",
    hdrs = ["solution91.h"],
    srcs = ["solution91.cc"],
    deps = [
      ":ListNode"
    ]
)

cc_library(
    name = "solution94",
    hdrs = ["solution94.h"],
    srcs = ["solution94.cc"],
    deps = [
      ":TreeNode"
    ]
)

cc_library(
    name = "solution95",
    hdrs = ["solution95.h"],
    srcs = ["solution95.cc"],
    deps = [
      ":TreeNode"
    ]
)

cc_library(
    name = "solution96",
    hdrs = ["solution96.h"],
    srcs = ["solution96.cc"]
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

cc_test(
  name = "solution91_test",
  size = "small",
  srcs=["solution91_test.cc"],
  deps = [
    "@com_google_googletest//:gtest_main",
    ":solution91"
  ],
)

cc_test(
  name = "solution96_test",
  size = "small",
  srcs=["solution96_test.cc"],
  deps = [
    "@com_google_googletest//:gtest_main",
    ":solution96"
  ],
)

cc_library(
    name = "TreeNode",
    hdrs = ["TreeNode.h"],
)  

cc_library(
    name = "ListNode",
    hdrs = ["ListNode.h"],
)
