# e203-simulator-scarab

目标：提取scarab单核框架设计 with modern cpp

## 常用库
1. log使用https://github.com/gabime/spdlog
2. param使用https://github.com/nlohmann/json 或 .def风格

## modern cpp风格
参考ramulator 以及 dreamCore


1. 使用namespace管理package
2. 每个module都有对应的reset，组合逻辑实现函数，log
3. log直接直接转vcd

