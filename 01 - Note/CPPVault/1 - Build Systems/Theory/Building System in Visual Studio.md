
Developing a project in Visual Studio is a pretty easy way to make C++ softwares. Because the build in building system will help us significantly. Note everything will be in Visual Studio 2022.

## Create an executable.

Creating an executable is not really hard in Visual Studio. 

![[Képernyőkép 2024-11-16 200525.png]]
You can choose Empty or a Cosole app. If you want more advance stuff you can pick like Windows Desktop Application or you can do Linux apps. Empty project will be fine.

Let' create a main.cpp file and create the Hello World app

```
#include <iostream>

int main() {
	std::cout << "Hello World";

	return 0;
}
```



## Realited Notes/Linkes

- [Visual Studio projects - C++](https://learn.microsoft.com/en-us/cpp/build/creating-and-managing-visual-cpp-projects?view=msvc-170)