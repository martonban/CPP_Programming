In C++ we don't have any kind of way to create a abstract class, like in Java we have a keyword for it. But in C++ we have to create function/method list and distinguish them from a simple fuction with the ``virtual``  keyword. 

**AbstractClass.h**
```
class AbstractClass {
	public:
		virtual int function();
} 
```

**DescendedClass.h**

```
#include "AbstractClass.h"

class DescendedClass :  AbstractClass {
	public:
		virtual int function();
		int own_function();
}

```


There are two type of virtual function lets see the diffarence

**AbstractClass.h**
```
class AbstractClass {
	public:
		// You DONT'T HAVE TO implemt in the descended class
		virtual int function();

		// You HAVE TO implemt in the descended class
		virtual int function() = 0; 

} 
```