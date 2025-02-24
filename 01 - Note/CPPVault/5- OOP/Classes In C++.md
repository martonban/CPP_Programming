Creating a class in C++ is a little bit more complicated then in Java or C#. Let see what is the mian differencs between C++ and the others.


## Pointers and references

We using C++ so we need to prepare for some pointers and references. If you will use them in a class as a data field you have to implement the Rule Of Five. 

Let's see a class with a bad implementation:

```
class Test {
	private:
		int* data;
	public:
		Test(int val) : data(new int(val));
}
```

This is good but we will have problems, if we want to copy this class.



## Resources
- [Article 1](https://www.geeksforgeeks.org/rule-of-five-in-cpp/)