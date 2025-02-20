# Description
This is template for one-time calculations in Visual Studio on Windows
## Features
- Can be added to the VS as a template for a project.
- The code is transferred from main to the Workspace.cpp file.
- Tracks the execution time.
- You can change the ResultType from int to the one you need in the line:
  ```cpp
    // ResultType.h
    typedef int ResultType;
  ```
- Automatically copies the result to the clipboard (on Windows).
- Writes the result to a file.
