# Fall 2021 - PA03 - Mystery Sort

- See the project handout [here](https://docs.google.com/document/d/1AsL1vmUqZs5aESM39dEMD6mSQdIcFVvCoVp1Vh2YbPc/edit?usp=sharing)

## Important

In order for the project to link against the correct version of the myster_sorter library, you need to set
a CMAKE environment variable.  To do this, Choose **Settings** from the File Menu.  In the left-side tree, 
choose **Build, Execution, Deployment** > **CMake**.  In the **Environment** field (circled in yellow in the 
screencap below), add `PLATFORM=wsl2` if you're on Windows using WSL OR add `PLATFORM=mac` if you're on a mac. 

![cmake_settings](img/cmake_settings.png)

- The `include` directory contains a .h file with 5 mystery sort algorithm function declarations
- The `lib` folder contains a static link library that has the implementations of those 5 sorts. There's a version for WSL and a version for mac. 

