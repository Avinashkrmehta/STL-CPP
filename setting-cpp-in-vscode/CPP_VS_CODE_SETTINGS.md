# STL-CPP

## Setup Instructions

1. Create a `test.cpp` file in the root directory named `STL-CPP`.
2. Create an `input.txt` file in the root directory.
3. Create an `output.txt` file in the root directory.
4. Set the layout to the left for the `input.txt` file.
5. Set the layout down for the `output.txt` file.

## Configuration Steps

1. Open the terminal and choose the option "Configure Tasks".
2. Select the option to create a `tasks.json` file from a template.
3. Choose the MSbuild option to create the `tasks.json` file with default configuration.
4. Replace the default configuration in the `tasks.json` file with the following:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and run",
      "type": "shell",
      "command": "",
      "args": [
        "g++",
        "-g",
        "${relativeFile}",
        "-o",
        "${fileBasenameNoExtension}.out",
        "&&",
        "clear",
        "&&",
        "timeout",
        "10",
        "/usr/bin/time",
        "-v",
        "--output",
        "sys.txt",
        "./${fileBasenameNoExtension}.out",
        "<",
        "input.txt",
        ">",
        "output.txt",
        "&&",
        "rm",
        "*out"
      ],
      "presentation": {
        "reveal": "silent"
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": {
        "owner": "cpp",
        "fileLocation": [
          "relative",
          "${workspaceRoot}"
        ],
        "pattern": {
          "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
          "file": 1,
          "line": 2,
          "column": 3,
          "severity": 4,
          "message": 5
        }
      }
    }
  ]
}
