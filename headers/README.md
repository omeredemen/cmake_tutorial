# Headers
We can see defined header files in any top of the C/C++ file. Some of them is already known by system. But what if we create one. It doesnt find defalult so we have to say where this headers file is located. We can do that with `target_include_directories()`.

```bash
.
├── CMakeLists.txt
├── include
│   └── hello.h
├── main.cpp
└── src
    └── hello.cpp

2 directories, 4 files
```

## target_include_directories()

The `target_include_directories()` function in CMake specifies the include directories to be used by a target. This is crucial for setting up the include paths that the compiler will use to locate header files during the compilation of a target.

### Syntax

```
target_include_directories(<target> [SYSTEM] [AFTER|BEFORE]
                           <INTERFACE|PUBLIC|PRIVATE> [items1...]
                           [<INTERFACE|PUBLIC|PRIVATE> [items2...]] ...)
```

### Arguments

- **<target>**: The name of the target to which the include directories will be applied.
- **SYSTEM**: Treats the directories as system directories, which can suppress warnings.
- **AFTER|BEFORE**: Specifies whether to append or prepend the directories to the include path list. (CMake 3.16+)
- **INTERFACE, PUBLIC, PRIVATE**: These keywords specify the scope of the include directories.

### Scope Keywords

- **INTERFACE**: The include directories are used by targets that link to this target but not by the target itself.
- **PUBLIC**: The include directories are used by both the target and by targets that link to this target.
- **PRIVATE**: The include directories are used only by the target itself.

## set()

Set a normal, cache, or environment variable to a given value. See the [cmake-language(7) variables](https://cmake.org/cmake/help/latest/manual/cmake-language.7.html#cmake-language-variables) documentation for the scopes and interaction of normal variables and cache entries.

Signatures of this command that specify a `<value>...` placeholder expect zero or more arguments. Multiple arguments will be joined as a [semicolon-separated list](https://cmake.org/cmake/help/latest/manual/cmake-language.7.html#cmake-language-lists) to form the actual variable value to be set.

```bash
set(<variable> <value>... [PARENT_SCOPE])
```

Set or unset `<variable>` in the current function or directory scope:
• If at least one `<value>...` is given, set the variable to that value.
• If no value is given, unset the variable. This is equivalent to [**`unset(<variable>)`**](https://cmake.org/cmake/help/latest/command/unset.html#command:unset).

### **Set Environment Variable**

```bash
set(ENV{<variable>} [<value>])
```

Sets an [**`Environment Variable`**](https://cmake.org/cmake/help/latest/manual/cmake-env-variables.7.html#manual:cmake-env-variables(7)) to the given value. Subsequent calls of `$ENV{<variable>}` will return this new value.