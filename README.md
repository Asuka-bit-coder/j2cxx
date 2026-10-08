# j2cxx

`j2cxx` is an experimental Java-to-C++ source-to-source
compiler written in modern C++.

## Status

Early development.

Current milestone: compiler infrastructure and frontend foundation.

## Planned Pipeline

Java Source
→ Lexer
→ Parser
→ AST
→ Semantic Analysis
→ Typed HIR
→ C++ Backend
→ Native C++ Toolchain

## Build

```bash
cmake -S . -B build -G Ninja
cmake --build build
```

## Test

```bash
ctest --test-dir build --output-on-failure
```
